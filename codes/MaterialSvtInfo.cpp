void __fastcall MaterialSvtInfo___ctor(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AF9EF & 1) == 0 )
  {
    sub_B52984(&IconLabelInfo_TypeInfo);
    byte_42AF9EF = 1;
  }
  v3 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0LL);
  this->fields.iconLabelInfo = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialSvtInfo__OnClickMaterialStatus(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  MaterialSvtInfo_ClickDelegate_o *callbackFunc; // x19
  __int128 v4; // q1
  int64_t v5; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_42AF9EE & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AF9EE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    v4 = *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue;
    *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v7.fields.fakeValue = v4;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v6 = v7;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v6, 0LL);
    MaterialSvtInfo_ClickDelegate__Invoke(callbackFunc, 2, v5, 0LL);
  }
}


void __fastcall MaterialSvtInfo__OnClickMaterialSvt(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  MaterialSvtInfo_ClickDelegate_o *callbackFunc; // x19
  __int128 v4; // q1
  int64_t v5; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_42AF9ED & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AF9ED = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    v4 = *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue;
    *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v7.fields.fakeValue = v4;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v6 = v7;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v6, 0LL);
    MaterialSvtInfo_ClickDelegate__Invoke(callbackFunc, 1, v5, 0LL);
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
  __int64 v8; // x22
  __int64 v9; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *selectUsrSvtEnt; // x8
  UILabel_o *statusLb; // x20
  System_String_o *v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v7 = this;
  if ( (byte_42AF9EC & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_11637/*"SAME_SVTEQUIP_COMBINE"*/);
    this = (MaterialSvtInfo_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF9EC = 1;
  }
  if ( !baseData )
    goto LABEL_20;
  v9 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  this = (MaterialSvtInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
  selectUsrSvtEnt = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v7->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt )
    goto LABEL_20;
  if ( (_DWORD)this == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(selectUsrSvtEnt[5], 0LL) )
  {
    this = (MaterialSvtInfo_o *)UserServantEntity__isLimitCountMax(baseData, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      statusLb = v7->fields.statusLb;
      if ( isOver )
      {
        if ( statusLb )
        {
          v12 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_19:
          UILabel__set_text(statusLb, v12, 0LL);
          return;
        }
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (MaterialSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11637/*"SAME_SVTEQUIP_COMBINE"*/, 0LL);
        if ( statusLb )
        {
          v12 = (System_String_o *)this;
          goto LABEL_19;
        }
      }
LABEL_20:
      sub_B52A5C(this, baseData);
    }
  }
}


int32_t __fastcall MaterialSvtInfo__getIndex(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


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
  __int128 v15; // q1
  void *Instance; // x0
  __int64 v17; // x1
  struct UserServantEntity_o *Entity; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  IconLabelInfo_o *iconLabelInfo; // x25
  int32_t v26; // w26
  int64_t v27; // x2
  const MethodInfo *v28; // x4
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_42AF9EB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF9EB = 1;
  }
  this->fields.index = idx;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v35, selectUsrSvtId, 0LL);
  v15 = *(_OWORD *)&v35.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue = *(_OWORD *)&v35.fields.fakeValue;
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey = v15;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_17;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             selectUsrSvtId,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEnt,
    (System_Int32_array **)Entity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Instance = this->fields.selectUsrSvtEnt;
  if ( !Instance )
    goto LABEL_17;
  iconLabelInfo = this->fields.iconLabelInfo;
  v26 = *((_DWORD *)Instance + 64);
  Instance = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_17;
  IconLabelInfo__Set_28274368(iconLabelInfo, 2, v26, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  Instance = this->fields.svtFaseIconComp;
  if ( !Instance )
    goto LABEL_17;
  ServantFaceIconComponent__Set_30470152(
    (ServantFaceIconComponent_o *)Instance,
    selectUsrSvtId,
    this->fields.iconLabelInfo,
    0LL,
    0LL);
  Instance = this->fields.statusLb;
  if ( !Instance
    || (UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (Instance = this->fields.statusLb) == 0LL)
    || (Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, isShowStatus, 0LL),
        MaterialSvtInfo__checkIsLimitTarget(this, baseData, v27, overFlg, v28),
        (Instance = this->fields.equipSprite) == 0LL)
    || (Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B52A5C(Instance, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void __fastcall MaterialSvtInfo__setMaterialSvtInfo_24466844(
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
    sub_B52A5C(equipSprite, v11);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall MaterialSvtInfo_ClickDelegate__BeginInvoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        int32_t type,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+8h] [xbp-48h] BYREF
  int64_t v11; // [xsp+20h] [xbp-30h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = type;
  v11 = usrSvtId;
  if ( (byte_42ADCC3 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&CombineMenuControl_TargetType_TypeInfo);
    byte_42ADCC3 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(long_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall MaterialSvtInfo_ClickDelegate__EndInvoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialSvtInfo_ClickDelegate__Invoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        int32_t type,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  MaterialSvtInfo_ClickDelegate_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, int64_t, _QWORD); // x0
  MaterialSvtInfo_ClickDelegate_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, int64_t, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  MaterialSvtInfo_ClickDelegate_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = type;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (MaterialSvtInfo_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, int64_t, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&type, usrSvtId, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, usrSvtId, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, usrSvtId, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, int64_t, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, v28, usrSvtId, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, int64_t, _QWORD))v17)(v22, v14, usrSvtId, *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, int64_t, _QWORD))(*v22
                                                                     + 16LL * *(unsigned __int16 *)(v23 + 72)
                                                                     + 312))(
            v22,
            v34,
            usrSvtId,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, int64_t, __int64))v24)(v22, v34, usrSvtId, v23);
    goto LABEL_38;
  }
}