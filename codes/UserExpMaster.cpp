void __fastcall UserExpMaster___ctor(UserExpMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EFA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__, method, v2);
    byte_4B16EFA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    61,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserExpEntity_o *__fastcall UserExpMaster__getEntityFromLevel(
        UserExpMaster_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4B16EFB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, *(_QWORD *)&lv, method);
    byte_4B16EFB = 1;
  }
  return (UserExpEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              lv,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserExpMaster__getLevel(
        UserExpMaster_o *this,
        int64_t exp,
        int32_t start_lv,
        const MethodInfo *method)
{
  int32_t klass; // w19
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  int32_t LevelMax; // w0
  int32_t v8; // w22
  Il2CppObject *Entity; // x0
  int32_t v10; // w23

  klass = start_lv;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  if ( (byte_4B16EFD & 1) == 0 )
  {
    this = (UserExpMaster_o *)sub_1BCA7E0(
                                &Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__,
                                exp,
                                *(_QWORD *)&start_lv);
    byte_4B16EFD = 1;
  }
  LevelMax = UserExpMaster__getLevelMax(this, (const MethodInfo *)exp);
  if ( LevelMax >= klass )
  {
    v8 = LevelMax;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v6,
               klass,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( Entity )
    {
      v10 = klass + 1;
      do
      {
        klass = (int32_t)Entity[1].klass;
        if ( (__int64)Entity[1].monitor > exp )
          break;
        if ( v10 > v8 )
          break;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   v6,
                   v10++,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      }
      while ( Entity );
    }
  }
  return klass;
}


int32_t __fastcall UserExpMaster__getLevelMax(UserExpMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EFC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8725/*"MAX_USER_LV"*/, method, v2);
    byte_4B16EFC = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8725/*"MAX_USER_LV"*/, 0LL);
}