void CriFsConfig___ctor(CriFsConfig_o *this, const MethodInfo *method)
{
  CriFsPlugin_c *v3; // x0
  __int64 v4; // x1

  if ( (byte_4CAF9C0 & 1) == 0 )
  {
    sub_1C6BA08(&CriFsPlugin_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CAF9C0 = 1;
  }
  this->fields.numberOfInstallers = 2;
  *(_QWORD *)&this->fields.numberOfLoaders = 0x800000010LL;
  v3 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    v3 = CriFsPlugin_TypeInfo;
  }
  this->fields.installBufferSize = v3->static_fields->defaultInstallBufferSize / 1024;
  this->fields.maxPath = 256;
  v4 = StringLiteral_1/*""*/;
  this->fields.userAgentString = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC(&this->fields.userAgentString, v4);
  this->fields.androidDeviceReadBitrate = 50000000;
  System_Object___ctor((Il2CppObject *)this, 0);
}