void MaterialSvtInfo___ctor(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2B4EE & 1) == 0 )
  {
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    byte_4C2B4EE = 1;
  }
  v3 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0);
  this->fields.iconLabelInfo = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialSvtInfo__OnClickMaterialStatus(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  struct MaterialSvtInfo_ClickDelegate_o *callbackFunc; // x20
  __int128 v4; // q1
  int64_t v5; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4C2B4ED & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B4ED = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    v4 = *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue;
    *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v7.fields.fakeValue = v4;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v6 = v7;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v6, 0);
    ((void (__fastcall *)(intptr_t, __int64, int64_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      v5,
      callbackFunc->fields.method);
  }
}


void MaterialSvtInfo__OnClickMaterialSvt(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  struct MaterialSvtInfo_ClickDelegate_o *callbackFunc; // x20
  __int128 v4; // q1
  int64_t v5; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4C2B4EC & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B4EC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    v4 = *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue;
    *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v7.fields.fakeValue = v4;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v6 = v7;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v6, 0);
    ((void (__fastcall *)(intptr_t, __int64, int64_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      v5,
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
  UILabel_o *statusLb; // x20
  MaterialSvtInfo_o *v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v7 = this;
  if ( (byte_4C2B4EB & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_11439/*"SAME_SVTEQUIP_COMBINE"*/);
    this = (MaterialSvtInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B4EB = 1;
  }
  if ( !baseData )
    goto LABEL_18;
  v9 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  this = (MaterialSvtInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v13, 0);
  selectUsrSvtEnt = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v7->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt )
    goto LABEL_18;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(selectUsrSvtEnt[5], 0) )
  {
    this = (MaterialSvtInfo_o *)UserServantEntity__isLimitCountMax(baseData, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      statusLb = v7->fields.statusLb;
      if ( isOver )
      {
        if ( statusLb )
        {
          v12 = (MaterialSvtInfo_o *)StringLiteral_1/*""*/;
LABEL_17:
          UILabel__set_text(statusLb, (System_String_o *)v12, 0);
          return;
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (MaterialSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11439/*"SAME_SVTEQUIP_COMBINE"*/, 0);
        if ( statusLb )
        {
          v12 = this;
          goto LABEL_17;
        }
      }
LABEL_18:
      sub_1C2D6EC(this, baseData);
    }
  }
}


int32_t MaterialSvtInfo__getIndex(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


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
  __int128 v15; // q0
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  IconLabelInfo_o *iconLabelInfo; // x25
  int32_t nowLoadCount; // w26
  int64_t v23; // x2
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27[2]; // [xsp+10h] [xbp-90h] BYREF

  if ( (byte_4C2B4EA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B4EA = 1;
  }
  this->fields.index = idx;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v27, selectUsrSvtId, 0);
  v15 = *(_OWORD *)&v27[0].fields.fakeValue;
  v27[1] = v27[0];
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey = *(_OWORD *)&v27[0].fields.currentCryptoKey;
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue = v15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             selectUsrSvtId,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = (struct UserServantEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectUsrSvtEnt, (int32_t)Entity, v19, v20);
  Instance = (DataManager_o *)this->fields.selectUsrSvtEnt;
  if ( !Instance )
    goto LABEL_16;
  iconLabelInfo = this->fields.iconLabelInfo;
  nowLoadCount = Instance[1].fields.nowLoadCount;
  Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
  if ( !iconLabelInfo )
    goto LABEL_16;
  IconLabelInfo__Set_40696284(iconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
  Instance = (DataManager_o *)this->fields.svtFaseIconComp;
  if ( !Instance )
    goto LABEL_16;
  ServantFaceIconComponent__Set_40783536(
    (ServantFaceIconComponent_o *)Instance,
    selectUsrSvtId,
    this->fields.iconLabelInfo,
    0,
    0);
  Instance = (DataManager_o *)this->fields.statusLb;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0),
        (Instance = (DataManager_o *)this->fields.statusLb) == 0)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isShowStatus, 0),
        MaterialSvtInfo__checkIsLimitTarget(this, baseData, v23, overFlg, v24),
        (Instance = (DataManager_o *)this->fields.equipSprite) == 0)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0 )
  {
LABEL_16:
    sub_1C2D6EC(Instance, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v25, v26);
}


void MaterialSvtInfo__setMaterialSvtInfo_48653732(
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
    sub_1C2D6EC(equipSprite, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipSprite, isEquip, 0);
}


void MaterialSvtInfo_ClickDelegate___ctor(
        MaterialSvtInfo_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A769C0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76968;
}


System_IAsyncResult_o *MaterialSvtInfo_ClickDelegate__BeginInvoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        int32_t type,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+0h] [xbp-60h] BYREF
  int64_t v14; // [xsp+18h] [xbp-48h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = usrSvtId;
  v15 = type;
  if ( (byte_4C2B4EF & 1) == 0 )
  {
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&CombineMenuControl_TargetType_TypeInfo);
    byte_4C2B4EF = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v15, usrSvtId, callback, object);
  v13[1] = j_il2cpp_value_box_0(long_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void MaterialSvtInfo_ClickDelegate__EndInvoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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