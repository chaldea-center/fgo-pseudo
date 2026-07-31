void MaterialSvtInfo___ctor(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5932236 & 1) == 0 )
  {
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    byte_5932236 = 1;
  }
  v3 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0);
  this->fields.iconLabelInfo = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialSvtInfo__OnClickMaterialStatus(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MaterialSvtInfo_ClickDelegate_o *callbackFunc; // x20
  __int128 v5; // q1
  int64_t v6; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_5932235 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5932235 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    v5 = *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue;
    *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v8.fields.fakeValue = v5;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    v7 = v8;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v7, 0);
    ((void (__fastcall *)(intptr_t, __int64, int64_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      v6,
      callbackFunc->fields.method);
  }
}


void MaterialSvtInfo__OnClickMaterialSvt(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MaterialSvtInfo_ClickDelegate_o *callbackFunc; // x20
  __int128 v5; // q1
  int64_t v6; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_5932234 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5932234 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    v5 = *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue;
    *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v8.fields.fakeValue = v5;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    v7 = v8;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v7, 0);
    ((void (__fastcall *)(intptr_t, __int64, int64_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      v6,
      callbackFunc->fields.method);
  }
}


void MaterialSvtInfo__checkIsLimitTarget(
        MaterialSvtInfo_o *this,
        UserServantEntity_o *baseData,
        int64_t selectUsrSvtId,
        bool isOver,
        const MethodInfo *method)
{
  MaterialSvtInfo_o *v7; // x20
  __int64 v8; // x22
  __int64 v9; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *selectUsrSvtEnt; // x8
  __int64 v11; // x2
  UILabel_o *statusLb; // x20
  MaterialSvtInfo_o *v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v7 = this;
  if ( (byte_5932233 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_11924/*"SAME_SVTEQUIP_COMBINE"*/);
    this = (MaterialSvtInfo_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932233 = 1;
  }
  if ( !baseData )
    goto LABEL_18;
  v8 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseData, selectUsrSvtId);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this = (MaterialSvtInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0);
  selectUsrSvtEnt = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v7->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt )
    goto LABEL_18;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(selectUsrSvtEnt[5], 0) )
  {
    this = (MaterialSvtInfo_o *)UserServantEntity__isLimitCountMax(baseData, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      statusLb = v7->fields.statusLb;
      if ( isOver )
      {
        if ( statusLb )
        {
          v13 = (MaterialSvtInfo_o *)StringLiteral_1/*""*/;
LABEL_17:
          UILabel__set_text(statusLb, (System_String_o *)v13, 0);
          return;
        }
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, baseData, v11);
        this = (MaterialSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11924/*"SAME_SVTEQUIP_COMBINE"*/, 0);
        if ( statusLb )
        {
          v13 = this;
          goto LABEL_17;
        }
      }
LABEL_18:
      sub_21FFECC(this, baseData);
    }
  }
}


int32_t MaterialSvtInfo__getIndex(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


// local variable allocation has failed, the output may be wrong!
void MaterialSvtInfo__setMaterialSvtInfo(
        MaterialSvtInfo_o *this,
        int32_t idx,
        UserServantEntity_o *baseData,
        int64_t selectUsrSvtId,
        bool isShowStatus,
        bool overFlg,
        MaterialSvtInfo_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v15; // x0
  int v16; // w8
  __int128 v17; // q1
  const MethodInfo_476E8C0 *v18; // x0
  void *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  IconLabelInfo_o *iconLabelInfo; // x25
  int32_t v29; // w26
  int64_t v30; // x2
  const MethodInfo *v31; // x4
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_5932232 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932232 = 1;
  }
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
  v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  this->fields.index = idx;
  if ( !v16 )
    j_il2cpp_runtime_class_init_0(v15, *(_QWORD *)&idx, baseData);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v38, selectUsrSvtId, 0);
  v17 = *(_OWORD *)&v38.fields.fakeValue;
  v18 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey = *(_OWORD *)&v38.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue = v17;
  Instance = SingletonMonoBehaviour_object___get_Instance(v18);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             selectUsrSvtId,
             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = (struct UserServantEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectUsrSvtEnt,
    (int32_t)Entity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = this->fields.selectUsrSvtEnt;
  if ( !Instance )
    goto LABEL_16;
  iconLabelInfo = this->fields.iconLabelInfo;
  v29 = *((_DWORD *)Instance + 100);
  Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
  if ( !iconLabelInfo )
    goto LABEL_16;
  IconLabelInfo__Set_47932852(iconLabelInfo, 2, v29, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
  Instance = this->fields.svtFaseIconComp;
  if ( !Instance )
    goto LABEL_16;
  ServantFaceIconComponent__Set_48018012(
    (ServantFaceIconComponent_o *)Instance,
    selectUsrSvtId,
    this->fields.iconLabelInfo,
    0,
    0);
  Instance = this->fields.statusLb;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0),
        (Instance = this->fields.statusLb) == 0)
    || (Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isShowStatus, 0),
        MaterialSvtInfo__checkIsLimitTarget(this, baseData, v30, overFlg, v31),
        (Instance = this->fields.equipSprite) == 0)
    || (Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0 )
  {
LABEL_16:
    sub_21FFECC(Instance, v20);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


void MaterialSvtInfo__setMaterialSvtInfo_37861504(
        MaterialSvtInfo_o *this,
        int32_t idx,
        UserServantEntity_o *baseData,
        int64_t selectUsrSvtId,
        bool isShowStatus,
        bool overFlg,
        bool isEquip,
        MaterialSvtInfo_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UnityEngine_Component_o *equipSprite; // x0

  MaterialSvtInfo__setMaterialSvtInfo(
    this,
    idx,
    baseData,
    selectUsrSvtId,
    isShowStatus,
    overFlg,
    callback,
    (const MethodInfo *)callback);
  equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !equipSprite
    || (equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0)) == 0 )
  {
    sub_21FFECC(equipSprite, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipSprite, isEquip, 0);
}


void MaterialSvtInfo_ClickDelegate___ctor(
        MaterialSvtInfo_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEC194;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEC13C;
}


System_IAsyncResult_o *MaterialSvtInfo_ClickDelegate__BeginInvoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        int32_t type,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int64_t v11; // [xsp+20h] [xbp-40h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = type;
  v11 = usrSvtId;
  if ( (byte_5932237 & 1) == 0 )
  {
    sub_21FFC50(&CombineMenuControl_TargetType_TypeInfo);
    byte_5932237 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C090, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void MaterialSvtInfo_ClickDelegate__EndInvoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void MaterialSvtInfo_ClickDelegate__Invoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        int32_t type,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int64_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    type,
    usrSvtId,
    this->fields.method);
}