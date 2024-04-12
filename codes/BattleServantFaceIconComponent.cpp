void __fastcall BattleServantFaceIconComponent___ctor(BattleServantFaceIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B2A1A & 1) == 0 )
  {
    sub_B52984(&ServantFaceIconComponent_TypeInfo);
    byte_42B2A1A = 1;
  }
  if ( (BYTE3(ServantFaceIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
  }
  ServantFaceIconComponent___ctor((ServantFaceIconComponent_o *)this, 0LL);
}


void __fastcall BattleServantFaceIconComponent__SetActiveDarkMode(
        BattleServantFaceIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
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
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( isActive )
  {
    r = this->fields.darkModeColor.fields.r;
    g = this->fields.darkModeColor.fields.g;
    b = this->fields.darkModeColor.fields.b;
    a = this->fields.darkModeColor.fields.a;
  }
  else
  {
    white = UnityEngine_Color__get_white(0LL);
    r = white.fields.r;
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
  }
  v21.fields.r = r;
  v21.fields.g = g;
  v21.fields.b = b;
  v21.fields.a = a;
  BattleServantFaceIconComponent__SetColor(this, (UIWidget_o *)this->fields.backSprite, v21, method);
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v8, (UIWidget_o *)this->fields.faceSprite, v22, v9);
  v23.fields.r = r;
  v23.fields.g = g;
  v23.fields.b = b;
  v23.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v10, (UIWidget_o *)this->fields.frameSprite, v23, v11);
  v24.fields.r = r;
  v24.fields.g = g;
  v24.fields.b = b;
  v24.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v12, (UIWidget_o *)this->fields.typeSprite, v24, v13);
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v14, (UIWidget_o *)this->fields.classSprite, v25, v15);
  v26.fields.r = r;
  v26.fields.g = g;
  v26.fields.b = b;
  v26.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v16, (UIWidget_o *)this->fields.raritySprite, v26, v17);
  v27.fields.r = r;
  v27.fields.g = g;
  v27.fields.b = b;
  v27.fields.a = a;
  BattleServantFaceIconComponent__SetColor(v18, (UIWidget_o *)this->fields.dropNumLabel, v27, v19);
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
  if ( (byte_42B2A19 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2A19 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)widget, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !widget )
      sub_B52A5C(v9, v10);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v10; // x2

  if ( (byte_42B2A17 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2A17 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userCommandCodeId,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  ServantFaceIconComponent__Set_30476088(
    (ServantFaceIconComponent_o *)this,
    (UserCommandCodeEntity_o *)Entity,
    0LL,
    0LL,
    0LL);
  BattleServantFaceIconComponent__SetDropLabel(this, dropNum, v10);
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
  BattleServantFaceIconComponent_o *v4; // x19
  UILabel_o *dropNumLabel; // x19
  Il2CppObject *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42B2A18 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23900/*"×{0}"*/);
    this = (BattleServantFaceIconComponent_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2A18 = 1;
  }
  dropNumLabel = v4->fields.dropNumLabel;
  if ( dropNum >= 2 )
  {
    v7 = dropNum;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
    this = (BattleServantFaceIconComponent_o *)System_String__Format((System_String_o *)StringLiteral_23900/*"×{0}"*/, v6, 0LL);
    if ( dropNumLabel )
    {
      UILabel__set_text(dropNumLabel, (System_String_o *)this, 0LL);
      return;
    }
LABEL_8:
    sub_B52A5C(this, *(_QWORD *)&dropNum);
  }
  if ( !dropNumLabel )
    goto LABEL_8;
  UILabel__set_text(dropNumLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall BattleServantFaceIconComponent__SetSvtDrop(
        BattleServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t dropNum,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  ServantFaceIconComponent__Set_30467316(
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
    0LL);
  BattleServantFaceIconComponent__SetDropLabel(this, dropNum, v7);
}


void __fastcall BattleServantFaceIconComponent__SetSvtDrop_29903296(
        BattleServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info,
        int32_t dropNum,
        int32_t limit,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x22
  Il2CppObject *lockCountObj; // x23
  int32_t v14; // w0
  const MethodInfo *v15; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42B2A16 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2A16 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      userSvtId,
                                      (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v11);
  }
  lockCountObj = Instance->fields.lockCountObj;
  v12 = *(_QWORD *)&Instance->fields.nowLoadCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = lockCountObj;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
  ServantFaceIconComponent__Set_30467316(
    (ServantFaceIconComponent_o *)this,
    v14,
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
  BattleServantFaceIconComponent__SetDropLabel(this, dropNum, v15);
}