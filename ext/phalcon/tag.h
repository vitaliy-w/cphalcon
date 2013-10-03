
extern zend_class_entry *phalcon_tag_ce;

ZEPHIR_INIT_CLASS(Phalcon_Tag);

PHP_METHOD(Phalcon_Tag, setDI);
PHP_METHOD(Phalcon_Tag, getDI);
PHP_METHOD(Phalcon_Tag, getUrlService);
PHP_METHOD(Phalcon_Tag, getEscaperService);
PHP_METHOD(Phalcon_Tag, setAutoescape);
PHP_METHOD(Phalcon_Tag, setDefault);
PHP_METHOD(Phalcon_Tag, setDefaults);
PHP_METHOD(Phalcon_Tag, displayTo);
PHP_METHOD(Phalcon_Tag, hasValue);
PHP_METHOD(Phalcon_Tag, getValue);
PHP_METHOD(Phalcon_Tag, resetInput);
PHP_METHOD(Phalcon_Tag, linkTo);
PHP_METHOD(Phalcon_Tag, _inputField);
PHP_METHOD(Phalcon_Tag, _inputFieldChecked);
PHP_METHOD(Phalcon_Tag, textField);
PHP_METHOD(Phalcon_Tag, numericField);
PHP_METHOD(Phalcon_Tag, emailField);
PHP_METHOD(Phalcon_Tag, dateField);
PHP_METHOD(Phalcon_Tag, passwordField);
PHP_METHOD(Phalcon_Tag, hiddenField);
PHP_METHOD(Phalcon_Tag, fileField);
PHP_METHOD(Phalcon_Tag, checkField);
PHP_METHOD(Phalcon_Tag, radioField);
PHP_METHOD(Phalcon_Tag, imageInput);
PHP_METHOD(Phalcon_Tag, submitButton);
PHP_METHOD(Phalcon_Tag, selectStatic);
PHP_METHOD(Phalcon_Tag, select);
PHP_METHOD(Phalcon_Tag, textArea);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_setdi, 0, 0, 1)
	ZEND_ARG_INFO(0, dependencyInjector)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_setautoescape, 0, 0, 1)
	ZEND_ARG_INFO(0, autoescape)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_setdefault, 0, 0, 2)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_setdefaults, 0, 0, 1)
	ZEND_ARG_INFO(0, values)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_displayto, 0, 0, 2)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_hasvalue, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_getvalue, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_linkto, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag__inputfield, 0, 0, 2)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_INFO(0, parameters)
	ZEND_ARG_INFO(0, asValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag__inputfieldchecked, 0, 0, 2)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_textfield, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_numericfield, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_emailfield, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_datefield, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_passwordfield, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_hiddenfield, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_filefield, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_checkfield, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_radiofield, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_imageinput, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_submitbutton, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_selectstatic, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_select, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_textarea, 0, 0, 1)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_tag_method_entry) {
	PHP_ME(Phalcon_Tag, setDI, arginfo_phalcon_tag_setdi, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, getDI, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, getUrlService, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, getEscaperService, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, setAutoescape, arginfo_phalcon_tag_setautoescape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, setDefault, arginfo_phalcon_tag_setdefault, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, setDefaults, arginfo_phalcon_tag_setdefaults, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, displayTo, arginfo_phalcon_tag_displayto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, hasValue, arginfo_phalcon_tag_hasvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, getValue, arginfo_phalcon_tag_getvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, resetInput, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, linkTo, arginfo_phalcon_tag_linkto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, _inputField, arginfo_phalcon_tag__inputfield, ZEND_ACC_STATIC|ZEND_ACC_PROTECTED)
	PHP_ME(Phalcon_Tag, _inputFieldChecked, arginfo_phalcon_tag__inputfieldchecked, ZEND_ACC_STATIC|ZEND_ACC_PROTECTED)
	PHP_ME(Phalcon_Tag, textField, arginfo_phalcon_tag_textfield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, numericField, arginfo_phalcon_tag_numericfield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, emailField, arginfo_phalcon_tag_emailfield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, dateField, arginfo_phalcon_tag_datefield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, passwordField, arginfo_phalcon_tag_passwordfield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, hiddenField, arginfo_phalcon_tag_hiddenfield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, fileField, arginfo_phalcon_tag_filefield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, checkField, arginfo_phalcon_tag_checkfield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, radioField, arginfo_phalcon_tag_radiofield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, imageInput, arginfo_phalcon_tag_imageinput, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, submitButton, arginfo_phalcon_tag_submitbutton, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Tag, selectStatic, arginfo_phalcon_tag_selectstatic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, select, arginfo_phalcon_tag_select, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Phalcon_Tag, textArea, arginfo_phalcon_tag_textarea, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_FE_END
};