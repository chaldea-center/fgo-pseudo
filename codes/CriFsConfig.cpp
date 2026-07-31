void CriFsConfig___ctor(CriFsConfig_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CriFsPlugin_c *v4; // x0
  int v5; // w8
  void *v6; // x1
  int32_t defaultInstallBufferSize; // w8

  if ( (byte_59316F8 & 1) == 0 )
  {
    sub_21FFC50(&CriFsPlugin_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59316F8 = 1;
  }
  v4 = CriFsPlugin_TypeInfo;
  *(_QWORD *)&this->fields.numberOfLoaders = 0x800000010LL;
  v5 = *(&v4->_2.cctor_finished + 1);
  this->fields.numberOfInstallers = 2;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = CriFsPlugin_TypeInfo;
  }
  v6 = StringLiteral_1/*""*/;
  defaultInstallBufferSize = v4->static_fields->defaultInstallBufferSize;
  this->fields.userAgentString = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.installBufferSize = defaultInstallBufferSize / 1024;
  this->fields.maxPath = 256;
  sub_21FFBF4(&this->fields.userAgentString, v6);
  this->fields.androidDeviceReadBitrate = 50000000;
  System_Object___ctor((Il2CppObject *)this, 0);
}