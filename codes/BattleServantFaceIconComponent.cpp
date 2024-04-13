void __fastcall BattleServantFaceIconComponent___ctor(BattleServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB23B & 1) == 0 )
  {
    sub_B5D5C4(&ServantFaceIconComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB23B = 1;
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
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42EB23A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)widget, (_DWORD)method, v4);
    byte_42EB23A = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)widget, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !widget )
      sub_B5D69C(v10, v11);
    v12.fields.b = b;
    v12.fields.a = a;
    v12.fields.r = r;
    v12.fields.g = g;
    UIWidget__set_color(widget, v12, 0LL);
  }
}


void __fastcall BattleServantFaceIconComponent__SetCommandCodeDrop(
        BattleServantFaceIconComponent_o *this,
        int64_t userCommandCodeId,
        int32_t dropNum,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v16; // x2

  if ( (byte_42EB238 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId, dropNum, method);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EB238 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userCommandCodeId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  ServantFaceIconComponent__Set_30855448(
    (ServantFaceIconComponent_o *)this,
    (UserCommandCodeEntity_o *)Entity,
    0LL,
    0LL,
    0LL);
  BattleServantFaceIconComponent__SetDropLabel(this, dropNum, v16);
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
  BattleServantFaceIconComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UILabel_o *dropNumLabel; // x19
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  if ( (byte_42EB239 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, dropNum, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_24018/*"×{0}"*/, v6, v7, v8);
    this = (BattleServantFaceIconComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EB239 = 1;
  }
  dropNumLabel = v5->fields.dropNumLabel;
  if ( dropNum >= 2 )
  {
    v14 = dropNum;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    this = (BattleServantFaceIconComponent_o *)System_String__Format((System_String_o *)StringLiteral_24018/*"×{0}"*/, v13, 0LL);
    if ( dropNumLabel )
    {
      UILabel__set_text(dropNumLabel, (System_String_o *)this, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(this, *(_QWORD *)&dropNum);
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

  ServantFaceIconComponent__Set_30846632(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantFaceIconComponent__SetSvtDrop_29886712(
        BattleServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info,
        int32_t dropNum,
        int32_t limit,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x22
  Il2CppObject *lockCountObj; // x23
  int32_t v23; // w0
  const MethodInfo *v24; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42EB237 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, (_DWORD)info, *(_QWORD *)&dropNum);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EB237 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      userSvtId,
                                      (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v20);
  }
  lockCountObj = Instance->fields.lockCountObj;
  v21 = *(_QWORD *)&Instance->fields.nowLoadCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = lockCountObj;
  *(_QWORD *)&v25.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
  ServantFaceIconComponent__Set_30846632(
    (ServantFaceIconComponent_o *)this,
    v23,
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
  BattleServantFaceIconComponent__SetDropLabel(this, dropNum, v24);
}