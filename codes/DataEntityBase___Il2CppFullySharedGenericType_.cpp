void __fastcall DataEntityBase___Il2CppFullySharedGenericType____ctor(
        DataEntityBase_PKType__o *this,
        const MethodInfo_3163D48 *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase___Il2CppFullySharedGenericType___get_PrimaryKey(
        DataEntityBase_PKType__o *this,
        const MethodInfo_3163C10 *method)
{
  Il2CppClass *_2_PKType; // x0
  __int64 native_size; // x23
  int32_t v6; // w8
  char *v7; // x20
  DataEntityBase_PKType__c *klass; // x8
  DataEntityBase_PKType__RGCTXs *rgctx_data; // x8
  Il2CppClass *v10; // x0
  __int64 v12[2]; // [xsp+0h] [xbp-10h] BYREF

  v12[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  _2_PKType = method->klass->rgctx_data->_2_PKType;
  native_size = (unsigned int)_2_PKType->_2.native_size;
  v6 = _2_PKType->_2.native_size;
  if ( (BYTE5(_2_PKType->vtable[0].methodPtr) & 1) == 0 )
    v6 = *(_DWORD *)(sub_1BFD2F8() + 252);
  v7 = (char *)v12 - (((unsigned int)(v6 + 16) + 15LL) & 0x1FFFFFFF0LL);
  memset((char *)v12 - ((native_size + 15) & 0x1FFFFFFF0LL), 0, native_size);
  klass = this->klass;
  v12[0] = (__int64)v12 - ((native_size + 15) & 0x1FFFFFFF0LL);
  (*((void (__fastcall **)(_QWORD, const char *, DataEntityBase_PKType__o *, __int64 *, __int64))klass[1]._1.name + 2))(
    *((_QWORD *)klass[1]._1.name + 1),
    klass[1]._1.name,
    this,
    v12,
    v12[0]);
  memcpy(
    (char *)v12 - ((native_size + 15) & 0x1FFFFFFF0LL),
    (char *)v12 - ((native_size + 15) & 0x1FFFFFFF0LL),
    native_size);
  rgctx_data = method->klass->rgctx_data;
  v10 = rgctx_data->_2_PKType;
  if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
  {
    LODWORD(v10) = sub_1BFD2F8();
    rgctx_data = method->klass->rgctx_data;
  }
  sub_1BABE84(
    (int)v10,
    (int)rgctx_data[1]._0_DataEntityBase_PKType_,
    (int)v7,
    (char *)v12 - ((native_size + 15) & 0x1FFFFFFF0LL));
  return (System_String_o *)v12[0];
}