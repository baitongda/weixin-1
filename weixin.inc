<?php
/**
 * @file 微信公众平台配置页面
 */

function weixin_info_setting() {
  $form['weixin_token'] = array(
    '#type' => 'textfield',
    '#title' => '微信公众平台开发模式token',
    '#default_value' => variable_get('weixin_token'),
    '#required' => TRUE,
  );
  $form['weixin_greeting'] = array(
    '#type' => 'textarea',
    '#title' => '关注欢迎语',
    '#default_value' => variable_get('weixin_greeting'),
  );
  $form['weixin_noresult'] = array(
    '#type' => 'textarea',
    '#title' => '无结果时返回语',
    '#description' => '输入的关键词没要找到匹配结果',
    '#default_value' => variable_get('weixin_noresult'),
  );
  $form['weixin_noindentify'] = array(
    '#type' => 'textarea',
    '#title' => '无法识别时返回语',
    '#description' => '比如用户输入消息为语音或图片时',
    '#default_value' => variable_get('weixin_noindentify'),
  );
  $form['weixin_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => '要搜索的内容类型',
    '#description' => '没有特殊选择，默认搜索全部内容类型',
    '#options' => node_type_get_names(),
    '#default_value' => variable_get('weixin_node_types', array()),
  );

  return system_settings_form($form);
}
