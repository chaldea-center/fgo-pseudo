void __fastcall UserExpMaster___ctor(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7E5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__, method);
    byte_49FF7E5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    61,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserExpEntity_o *__fastcall UserExpMaster__getEntityFromLevel(
        UserExpMaster_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_49FF7E6 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, *(_QWORD *)&lv);
    byte_49FF7E6 = 1;
  }
  return (UserExpEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              lv,
                              (const MethodInfo_30D6798 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
}


int32_t __fastcall UserExpMaster__getLevel(
        UserExpMaster_o *this,
        int64_t exp,
        int32_t start_lv,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  int32_t LevelMax; // w0
  int32_t v8; // w22
  Il2CppObject *Entity; // x0
  int32_t v10; // w23

  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_49FF7E8 & 1) == 0 )
  {
    this = (UserExpMaster_o *)sub_1B64A00(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, exp);
    byte_49FF7E8 = 1;
  }
  LevelMax = UserExpMaster__getLevelMax(this, (const MethodInfo *)exp);
  if ( LevelMax >= start_lv )
  {
    v8 = LevelMax;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v6,
               start_lv,
               (const MethodInfo_30D6798 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( Entity )
    {
      v10 = start_lv + 1;
      do
      {
        start_lv = (int32_t)Entity[1].klass;
        if ( (__int64)Entity[1].monitor > exp )
          break;
        if ( v10 > v8 )
          break;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   v6,
                   v10++,
                   (const MethodInfo_30D6798 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      }
      while ( Entity );
    }
  }
  return start_lv;
}


int32_t __fastcall UserExpMaster__getLevelMax(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7E7 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_8562/*"MAX_USER_LV"*/, method);
    byte_49FF7E7 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8562/*"MAX_USER_LV"*/, 0LL);
}