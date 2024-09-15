void __fastcall MaterialSvtInfo___ctor(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A319BA & 1) == 0 )
  {
    sub_1B761C0(&IconLabelInfo_TypeInfo, method);
    byte_4A319BA = 1;
  }
  v3 = (IconLabelInfo_o *)sub_1B7640C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0LL);
  this->fields.iconLabelInfo = v3;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialSvtInfo__OnClickMaterialStatus(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  struct MaterialSvtInfo_ClickDelegate_o *callbackFunc; // x20
  __int128 v4; // q1
  int64_t v5; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4A319B9 & 1) == 0 )
  {
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A319B9 = 1;
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
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v6, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, int64_t, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      v5,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall MaterialSvtInfo__OnClickMaterialSvt(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  struct MaterialSvtInfo_ClickDelegate_o *callbackFunc; // x20
  __int128 v4; // q1
  int64_t v5; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4A319B8 & 1) == 0 )
  {
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A319B8 = 1;
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
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v6, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, int64_t, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      v5,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall MaterialSvtInfo__checkIsLimitTarget(
        MaterialSvtInfo_o *this,
        UserServantEntity_o *baseData,
        int64_t selectUsrSvtId,
        bool isOver,
        const MethodInfo *method)
{
  MaterialSvtInfo_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *selectUsrSvtEnt; // x8
  UILabel_o *statusLb; // x20
  MaterialSvtInfo_o *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v7 = this;
  if ( (byte_4A319B7 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, baseData);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B761C0(&StringLiteral_11417/*"SAME_SVTEQUIP_COMBINE"*/, v9);
    this = (MaterialSvtInfo_o *)sub_1B761C0(&StringLiteral_1/*""*/, v10);
    byte_4A319B7 = 1;
  }
  if ( !baseData )
    goto LABEL_18;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  this = (MaterialSvtInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v16, 0LL);
  selectUsrSvtEnt = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v7->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt )
    goto LABEL_18;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(selectUsrSvtEnt[5], 0LL) )
  {
    this = (MaterialSvtInfo_o *)UserServantEntity__isLimitCountMax(baseData, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      statusLb = v7->fields.statusLb;
      if ( isOver )
      {
        if ( statusLb )
        {
          v15 = (MaterialSvtInfo_o *)StringLiteral_1/*""*/;
LABEL_17:
          UILabel__set_text(statusLb, (System_String_o *)v15, 0LL);
          return;
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (MaterialSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11417/*"SAME_SVTEQUIP_COMBINE"*/, 0LL);
        if ( statusLb )
        {
          v15 = this;
          goto LABEL_17;
        }
      }
LABEL_18:
      sub_1B7641C(this, baseData);
    }
  }
}


int32_t __fastcall MaterialSvtInfo__getIndex(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialSvtInfo__setMaterialSvtInfo(
        MaterialSvtInfo_o *this,
        int32_t idx,
        UserServantEntity_o *baseData,
        int64_t selectUsrSvtId,
        bool isShowStatus,
        bool overFlg,
        MaterialSvtInfo_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int128 v19; // q0
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *Entity; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  IconLabelInfo_o *iconLabelInfo; // x25
  int32_t nowLoadCount; // w26
  int64_t v27; // x2
  const MethodInfo *v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31[2]; // [xsp+10h] [xbp-90h] BYREF

  if ( (byte_4A319B6 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&idx);
    sub_1B761C0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B761C0(&StringLiteral_1/*""*/, v18);
    byte_4A319B6 = 1;
  }
  this->fields.index = idx;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v31, selectUsrSvtId, 0LL);
  v19 = *(_OWORD *)&v31[0].fields.fakeValue;
  v31[1] = v31[0];
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey = *(_OWORD *)&v31[0].fields.currentCryptoKey;
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue = v19;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             selectUsrSvtId,
             (const MethodInfo_30FF92C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = (struct UserServantEntity_o *)Entity;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.selectUsrSvtEnt, (int32_t)Entity, v23, v24);
  Instance = (DataManager_o *)this->fields.selectUsrSvtEnt;
  if ( !Instance )
    goto LABEL_16;
  iconLabelInfo = this->fields.iconLabelInfo;
  nowLoadCount = Instance[1].fields.nowLoadCount;
  Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_16;
  IconLabelInfo__Set_37960168(iconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  Instance = (DataManager_o *)this->fields.svtFaseIconComp;
  if ( !Instance )
    goto LABEL_16;
  ServantFaceIconComponent__Set_38039500(
    (ServantFaceIconComponent_o *)Instance,
    selectUsrSvtId,
    this->fields.iconLabelInfo,
    0LL,
    0LL);
  Instance = (DataManager_o *)this->fields.statusLb;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (Instance = (DataManager_o *)this->fields.statusLb) == 0LL)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isShowStatus, 0LL),
        MaterialSvtInfo__checkIsLimitTarget(this, baseData, v27, overFlg, v28),
        (Instance = (DataManager_o *)this->fields.equipSprite) == 0LL)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B7641C(Instance, v21);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v29, v30);
}


void __fastcall MaterialSvtInfo__setMaterialSvtInfo_45051644(
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
    || (equipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(equipSprite, 0LL)) == 0LL )
  {
    sub_1B7641C(equipSprite, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipSprite, isEquip, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialSvtInfo_ClickDelegate___ctor(
        MaterialSvtInfo_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B76280(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B76438(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B762E8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C1EB8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C1E60;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MaterialSvtInfo_ClickDelegate__BeginInvoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        int32_t type,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+0h] [xbp-60h] BYREF
  int64_t v15; // [xsp+18h] [xbp-48h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = usrSvtId;
  v16 = type;
  if ( (byte_4A319BB & 1) == 0 )
  {
    sub_1B761C0(&long_TypeInfo, *(_QWORD *)&type);
    sub_1B761C0(&CombineMenuControl_TargetType_TypeInfo, v9);
    byte_4A319BB = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v16, usrSvtId, callback, object);
  v14[1] = j_il2cpp_value_box_0(long_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B76174(this, v14, callback, object);
}


void __fastcall MaterialSvtInfo_ClickDelegate__EndInvoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B76178(result, 0LL, method);
}


void __fastcall MaterialSvtInfo_ClickDelegate__Invoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        int32_t type,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int64_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    type,
    usrSvtId,
    *(_QWORD *)&this->fields.extra_arg);
}