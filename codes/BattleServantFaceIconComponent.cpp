void __fastcall BattleServantFaceIconComponent___ctor(BattleServantFaceIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B65FD3 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantFaceIconComponent_TypeInfo, method);
    byte_4B65FD3 = 1;
  }
  if ( !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
  ServantFaceIconComponent___ctor((ServantFaceIconComponent_o *)this, 0LL);
}


void __fastcall BattleServantFaceIconComponent__SetActiveDarkMode(
        BattleServantFaceIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  BattleServantFaceIconComponent_o *v8; // x0
  const MethodInfo *v9; // x2
  BattleServantFaceIconComponent_o *v10; // x0
  const MethodInfo *v11; // x2
  BattleServantFaceIconComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  BattleServantFaceIconComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  BattleServantFaceIconComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  BattleServantFaceIconComponent_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( isActive )
  {
    r = this->fields.darkModeColor.fields.r;
    g = this->fields.darkModeColor.fields.g;
    b = this->fields.darkModeColor.fields.b;
    a = this->fields.darkModeColor.fields.a;
  }
  v20.fields.r = r;
  v20.fields.g = g;
  v20.fields.b = b;
  v20.fields.a = a;
  BattleServantFaceIconComponent__SetColor(this, (UIWidget_o *)this->fields.backSprite, v20, method);
  v21.fields.r = r;
  v21.fields.g = g;
  v21.fields.b = b;
  v21.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v8, (UIWidget_o *)this->fields.faceSprite, v21, v9);
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v10, (UIWidget_o *)this->fields.frameSprite, v22, v11);
  v23.fields.r = r;
  v23.fields.g = g;
  v23.fields.b = b;
  v23.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v12, (UIWidget_o *)this->fields.typeSprite, v23, v13);
  v24.fields.r = r;
  v24.fields.g = g;
  v24.fields.b = b;
  v24.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v14, (UIWidget_o *)this->fields.classSprite, v24, v15);
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v16, (UIWidget_o *)this->fields.raritySprite, v25, v17);
  v26.fields.b = b;
  v26.fields.a = a;
  v26.fields.r = r;
  v26.fields.g = g;
  BattleServantFaceIconComponent__SetColor(v18, (UIWidget_o *)this->fields.dropNumLabel, v26, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantFaceIconComponent__SetColor(
        BattleServantFaceIconComponent_o *this,
        UIWidget_o *widget,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4B65FD2 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, widget);
    byte_4B65FD2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)widget, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !widget )
      sub_1BE4D28(v9, v10);
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UIWidget__set_color(widget, v11, 0LL);
  }
}


void __fastcall BattleServantFaceIconComponent__SetCommandCodeDrop(
        BattleServantFaceIconComponent_o *this,
        int64_t userCommandCodeId,
        int32_t dropNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4B65FD0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B65FD0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v10);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userCommandCodeId,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  ServantFaceIconComponent__Set_39132220(
    (ServantFaceIconComponent_o *)this,
    (UserCommandCodeEntity_o *)Entity,
    0LL,
    0LL,
    0LL);
  BattleServantFaceIconComponent__SetDropLabel(this, dropNum, v12);
}


void __fastcall BattleServantFaceIconComponent__SetCommandCodeDropByCodeId(
        BattleServantFaceIconComponent_o *this,
        int32_t commandCodeId,
        int32_t dropNum,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  if ( commandCodeId < 1 )
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)this, 0LL);
  else
    ServantFaceIconComponent__SetCommandCode((ServantFaceIconComponent_o *)this, commandCodeId, 0LL, 0LL, 2, 0, 0LL);
  BattleServantFaceIconComponent__SetDropLabel(this, dropNum, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantFaceIconComponent__SetDropLabel(
        BattleServantFaceIconComponent_o *this,
        int32_t dropNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleServantFaceIconComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *dropNumLabel; // x19
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4B65FD1 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&dropNum);
    sub_1BE4ACC(&StringLiteral_25511/*"×{0}"*/, v7);
    this = (BattleServantFaceIconComponent_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, v8);
    byte_4B65FD1 = 1;
  }
  dropNumLabel = v6->fields.dropNumLabel;
  if ( dropNum < 2 )
  {
    if ( dropNumLabel )
    {
      UILabel__set_text(dropNumLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_8:
    sub_1BE4D28(this, *(_QWORD *)&dropNum);
  }
  v11 = dropNum;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  this = (BattleServantFaceIconComponent_o *)System_String__Format((System_String_o *)StringLiteral_25511/*"×{0}"*/, v10, 0LL);
  if ( !dropNumLabel )
    goto LABEL_8;
  UILabel__set_text(dropNumLabel, (System_String_o *)this, 0LL);
}


void __fastcall BattleServantFaceIconComponent__SetSvtDrop(
        BattleServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t dropNum,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  MethodInfo *methoda; // [xsp+38h] [xbp-28h]

  ServantFaceIconComponent__Set_39122588(
    (ServantFaceIconComponent_o *)this,
    svtId,
    limitCnt,
    -1,
    0,
    0LL,
    0LL,
    2,
    0,
    0,
    0LL,
    0,
    0,
    0,
    0,
    methoda);
  BattleServantFaceIconComponent__SetDropLabel(this, dropNum, v7);
}


void __fastcall BattleServantFaceIconComponent__SetSvtDrop_38983852(
        BattleServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info,
        int32_t dropNum,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v17; // w0
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B65FCF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B65FCF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userSvtId,
                     (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
  {
    sub_1BE4D28(Instance, v14);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = klass;
  *(_QWORD *)&v19.fields.fakeValue = monitor;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v19, 0LL);
  ServantFaceIconComponent__Set_39122588(
    (ServantFaceIconComponent_o *)this,
    v17,
    limit,
    -1,
    0,
    0LL,
    0LL,
    2,
    0,
    0,
    0LL,
    0,
    0,
    0,
    0,
    0LL);
  BattleServantFaceIconComponent__SetDropLabel(this, dropNum, v18);
}