void DataEntityBase___Il2CppFullySharedGenericType____ctor(
        DataEntityBase_PKType__o *this,
        const MethodInfo_3460CF4 *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0);
}


System_String_o *DataEntityBase___Il2CppFullySharedGenericType___get_PrimaryKey(
        DataEntityBase_PKType__o *this,
        const MethodInfo_3460BBC *method)
{
  Il2CppClass *_2_PKType; // x0
  size_t actualSize; // x23
  uint32_t v6; // w8
  char *v7; // x20
  DataEntityBase_PKType__c *klass; // x8
  DataEntityBase_PKType__RGCTXs *rgctx_data; // x8
  Il2CppClass *v10; // x0
  _QWORD v12[2]; // [xsp+0h] [xbp-10h] BYREF

  v12[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  _2_PKType = method->klass->rgctx_data->_2_PKType;
  actualSize = _2_PKType->_2.actualSize;
  v6 = _2_PKType->_2.actualSize;
  if ( (*(&_2_PKType->_2.bitflags2 + 2) & 1) == 0 )
    v6 = *(_DWORD *)(sub_1C69B68() + 252);
  v7 = (char *)v12 - ((v6 + 16 + 15LL) & 0x1FFFFFFF0LL);
  memset((char *)v12 - ((actualSize + 15) & 0x1FFFFFFF0LL), 0, actualSize);
  klass = this->klass;
  v12[0] = (char *)v12 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  (*((void (__fastcall **)(_QWORD, void *, DataEntityBase_PKType__o *, _QWORD *, _QWORD))klass[1]._1.gc_desc + 2))(
    *((_QWORD *)klass[1]._1.gc_desc + 1),
    klass[1]._1.gc_desc,
    this,
    v12,
    v12[0]);
  memcpy(
    (char *)v12 - ((actualSize + 15) & 0x1FFFFFFF0LL),
    (char *)v12 - ((actualSize + 15) & 0x1FFFFFFF0LL),
    actualSize);
  rgctx_data = method->klass->rgctx_data;
  v10 = rgctx_data->_2_PKType;
  if ( (*(&v10->_2.bitflags2 + 2) & 1) == 0 )
  {
    LODWORD(v10) = sub_1C69B68();
    rgctx_data = method->klass->rgctx_data;
  }
  sub_1C94610(
    (int)v10,
    (int)rgctx_data[1]._0_DataEntityBase_PKType_,
    (int)v7,
    (char *)v12 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  return (System_String_o *)v12[0];
}