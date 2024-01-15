void __fastcall MaterialSvtInfo___ctor(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  IconLabelInfo_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7B80 & 1) == 0 )
  {
    sub_B16FFC(&IconLabelInfo_TypeInfo, method);
    byte_40F7B80 = 1;
  }
  v6 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, method, v2, v3, v4);
  IconLabelInfo___ctor(v6, 0LL);
  this->fields.iconLabelInfo = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaterialSvtInfo__OnClickMaterialStatus(MaterialSvtInfo_o *this, const MethodInfo *method)
{
  MaterialSvtInfo_ClickDelegate_o *callbackFunc; // x19
  __int128 v4; // q1
  int64_t v5; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_40F7B7F & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40F7B7F = 1;
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
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
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

  if ( (byte_40F7B7E & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40F7B7E = 1;
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
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w0
  struct UserServantEntity_o *selectUsrSvtEnt; // x8
  UILabel_o *statusLb; // x20
  System_String_o *v16; // x1
  System_String_o *v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40F7B7D & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, baseData);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11514/*"SAME_SVTEQUIP_COMBINE"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F7B7D = 1;
  }
  if ( !baseData )
    goto LABEL_20;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  selectUsrSvtEnt = this->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt )
    goto LABEL_20;
  if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(selectUsrSvtEnt->fields.svtId, 0LL)
    && !UserServantEntity__isLimitCountMax(baseData, 0LL) )
  {
    statusLb = this->fields.statusLb;
    if ( isOver )
    {
      if ( statusLb )
      {
        v16 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_19:
        UILabel__set_text(statusLb, v16, 0LL);
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
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11514/*"SAME_SVTEQUIP_COMBINE"*/, 0LL);
      if ( statusLb )
      {
        v16 = v17;
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_B170D4();
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
  __int128 v19; // q1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *Entity; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UserServantEntity_o *selectUsrSvtEnt; // x0
  IconLabelInfo_o *iconLabelInfo; // x25
  int32_t lv; // w26
  int32_t LevelMax; // w0
  ServantFaceIconComponent_o *svtFaseIconComp; // x0
  UILabel_o *statusLb; // x0
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v37; // x2
  const MethodInfo *v38; // x4
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_40F7B7C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&idx);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_1/*""*/, v18);
    byte_40F7B7C = 1;
  }
  this->fields.index = idx;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v47, selectUsrSvtId, 0LL);
  v19 = *(_OWORD *)&v47.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.fakeValue = *(_OWORD *)&v47.fields.fakeValue;
  *(_OWORD *)&this->fields.selectUsrSvtId.fields.currentCryptoKey = v19;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             selectUsrSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEnt,
    (System_Int32_array **)Entity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  selectUsrSvtEnt = this->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt )
    goto LABEL_17;
  iconLabelInfo = this->fields.iconLabelInfo;
  lv = selectUsrSvtEnt->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(selectUsrSvtEnt, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_17;
  IconLabelInfo__Set_28888132(iconLabelInfo, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  svtFaseIconComp = this->fields.svtFaseIconComp;
  if ( !svtFaseIconComp )
    goto LABEL_17;
  ServantFaceIconComponent__Set_30705604(svtFaseIconComp, selectUsrSvtId, this->fields.iconLabelInfo, 0LL, 0LL);
  statusLb = this->fields.statusLb;
  if ( !statusLb
    || (UILabel__set_text(statusLb, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (v35 = (UnityEngine_Component_o *)this->fields.statusLb) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v35, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, isShowStatus, 0LL),
        MaterialSvtInfo__checkIsLimitTarget(this, baseData, v37, overFlg, v38),
        (equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite) == 0LL)
    || (v40 = UnityEngine_Component__get_gameObject(equipSprite, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v40, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


void __fastcall MaterialSvtInfo__setMaterialSvtInfo_20825284(
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
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

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
  if ( !equipSprite || (gameObject = UnityEngine_Component__get_gameObject(equipSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, isEquip, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialSvtInfo_ClickDelegate___ctor(
        MaterialSvtInfo_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int64_t v12; // [xsp+20h] [xbp-30h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-24h] BYREF

  v13 = type;
  v12 = usrSvtId;
  if ( (byte_40F8616 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&CombineMenuControl_TargetType_TypeInfo, v9);
    byte_40F8616 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(long_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall MaterialSvtInfo_ClickDelegate__EndInvoke(
        MaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, int64_t, _QWORD); // x0
  MaterialSvtInfo_ClickDelegate_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, int64_t, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  MaterialSvtInfo_ClickDelegate_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = type;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, int64_t, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&type, usrSvtId);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, usrSvtId, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, usrSvtId, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, int64_t, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, usrSvtId, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, int64_t, _QWORD))v16)(v21, v13, usrSvtId, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, int64_t, _QWORD))(*v21
                                                                     + 16LL * *(unsigned __int16 *)(v22 + 72)
                                                                     + 312))(
            v21,
            v32,
            usrSvtId,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, int64_t, __int64))v23)(v21, v32, usrSvtId, v22);
    goto LABEL_38;
  }
}