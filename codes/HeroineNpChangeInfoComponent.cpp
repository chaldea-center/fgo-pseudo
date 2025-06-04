void __fastcall HeroineNpChangeInfoComponent___ctor(HeroineNpChangeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UIFont_o *__fastcall HeroineNpChangeInfoComponent__GetFont(
        HeroineNpChangeInfoComponent_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *object; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B05ECD & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIFont___, path);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_UnityEngine_Resources_Load_GameObject___, v5);
    byte_4B05ECD = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             path,
             (const MethodInfo_309AA50 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0LL, 0LL);
  if ( !v7 )
    return 0LL;
  if ( !object )
    sub_1BC3264(v7, v8);
  return (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)object,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HeroineNpChangeInfoComponent__Setup(
        HeroineNpChangeInfoComponent_o *this,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  DataManager_o *v12; // x22
  const MethodInfo *v13; // x2
  UILabel_o *detailLabel; // x20
  struct UILabel_o *v15; // x8

  if ( (byte_4B05ECA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&treasureDvcId);
    sub_1BC3008(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B05ECA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_13;
  v12 = Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v12->fields._DispLog, 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v12->fields.m_CancellationTokenSource, 0LL);
  HeroineNpChangeInfoComponent__SetupLevelLabel(this, treasureDvcLv, v13);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      treasureDvcLv,
                                      0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL),
        (v15 = this->fields.detailLabel) == 0LL) )
  {
LABEL_13:
    sub_1BC3264(Instance, v11);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v15->fields.mFontSize, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HeroineNpChangeInfoComponent__SetupForNpChange(
        HeroineNpChangeInfoComponent_o *this,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  System_String_o **v12; // x22
  UILabel_o *detailLabel; // x20
  struct UILabel_o *v14; // x8

  if ( (byte_4B05ECB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&treasureDvcId);
    sub_1BC3008(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B05ECB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                treasureDvcId,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_14;
  v12 = (System_String_o **)Instance;
  Instance = (DataManager_o *)this->fields.rubyLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v12[4], 0LL);
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)Instance, v12[3], 0LL);
  Instance = (DataManager_o *)this->fields.lvLabel;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, v12[5], 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                      (TreasureDvcLvMaster_o *)Instance,
                                      treasureDvcId,
                                      treasureDvcLv,
                                      0LL)) == 0LL
    || (detailLabel = this->fields.detailLabel,
        Instance = (DataManager_o *)TreasureDvcLvEntity__getDetalShort((TreasureDvcLvEntity_o *)Instance, 0LL),
        (v14 = this->fields.detailLabel) == 0LL) )
  {
LABEL_14:
    sub_1BC3264(Instance, v11);
  }
  WrapControlText__textAdjust(detailLabel, (System_String_o *)Instance, v14->fields.mFontSize, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HeroineNpChangeInfoComponent__SetupLevelLabel(
        HeroineNpChangeInfoComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  HeroineNpChangeInfoComponent_o *v3; // x19
  __int64 v4; // x1
  UIFont_o *v5; // x20
  UnityEngine_Object_o *lvLabel; // x21
  __int64 v7; // x1
  UILabel_o *v8; // x0
  UILabel_o *v9; // x19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = value;
  v3 = this;
  if ( (byte_4B05ECC & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    this = (HeroineNpChangeInfoComponent_o *)sub_1BC3008(&StringLiteral_6747/*"Fonts/FGO-NumberFont-02"*/, v4);
    byte_4B05ECC = 1;
  }
  v5 = HeroineNpChangeInfoComponent__GetFont(this, (System_String_o *)StringLiteral_6747/*"Fonts/FGO-NumberFont-02"*/, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
  {
    lvLabel = (UnityEngine_Object_o *)v3->fields.lvLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lvLabel, 0LL, 0LL) )
    {
      v8 = v3->fields.lvLabel;
      if ( !v8 )
        goto LABEL_13;
      UILabel__set_bitmapFont(v8, v5, 0LL);
    }
  }
  v9 = v3->fields.lvLabel;
  v8 = (UILabel_o *)System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !v9 )
LABEL_13:
    sub_1BC3264(v8, v7);
  UILabel__set_text(v9, (System_String_o *)v8, 0LL);
}