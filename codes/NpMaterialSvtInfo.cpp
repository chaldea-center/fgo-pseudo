void __fastcall NpMaterialSvtInfo___ctor(NpMaterialSvtInfo_o *this, const MethodInfo *method)
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

  if ( (byte_40F93A2 & 1) == 0 )
  {
    sub_B16FFC(&IconLabelInfo_TypeInfo, method);
    byte_40F93A2 = 1;
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


void __fastcall NpMaterialSvtInfo__OnClickMaterialStatus(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  NpMaterialSvtInfo_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    NpMaterialSvtInfo_ClickDelegate__Invoke(callbackFunc, 2, this->fields.selectUsrSvtId, 0LL);
}


void __fastcall NpMaterialSvtInfo__OnClickMaterialSvt(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  NpMaterialSvtInfo_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    NpMaterialSvtInfo_ClickDelegate__Invoke(callbackFunc, 1, this->fields.selectUsrSvtId, 0LL);
}


int32_t __fastcall NpMaterialSvtInfo__getIndex(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpMaterialSvtInfo__setMaterialSvtInfo(
        NpMaterialSvtInfo_o *this,
        int32_t idx,
        UserServantEntity_o *baseData,
        int64_t selectUsrSvtId,
        NpMaterialSvtInfo_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *npLvInfo; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *Entity; // x0
  UserServantEntity_o **p_selectUsrSvtEnt; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UserServantEntity_o *selectUsrSvtEnt; // x0
  IconLabelInfo_o *iconLabelInfo; // x23
  int32_t lv; // w24
  int32_t LevelMax; // w0
  ServantFaceIconComponent_o *svtFaseIconComp; // x0
  const MethodInfo *v31; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v41; // x21
  bool IsMaterialTd; // w0
  UISprite_o *v43; // x21

  if ( (byte_40F93A1 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_21736, v14);
    byte_40F93A1 = 1;
  }
  npLvInfo = this->fields.npLvInfo;
  this->fields.index = idx;
  this->fields.selectUsrSvtId = selectUsrSvtId;
  if ( !npLvInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(npLvInfo, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             selectUsrSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = Entity;
  p_selectUsrSvtEnt = &this->fields.selectUsrSvtEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEnt,
    (System_Int32_array **)Entity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  selectUsrSvtEnt = this->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt )
    goto LABEL_23;
  iconLabelInfo = this->fields.iconLabelInfo;
  lv = selectUsrSvtEnt->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(selectUsrSvtEnt, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_23;
  IconLabelInfo__Set_28888132(iconLabelInfo, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  svtFaseIconComp = this->fields.svtFaseIconComp;
  if ( !svtFaseIconComp )
    goto LABEL_23;
  ServantFaceIconComponent__Set_30705604(svtFaseIconComp, selectUsrSvtId, this->fields.iconLabelInfo, 0LL, 0LL);
  NpMaterialSvtInfo__setNpLvInfo(this, v31);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v39 = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( v39 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v39, 0LL);
      if ( *p_selectUsrSvtEnt )
      {
        v41 = gameObject;
        IsMaterialTd = UserServantEntity__IsMaterialTd(*p_selectUsrSvtEnt, 0LL);
        if ( v41 )
        {
          UnityEngine_GameObject__SetActive(v41, IsMaterialTd, 0LL);
          if ( *p_selectUsrSvtEnt )
          {
            if ( UserServantEntity__IsMaterialTd(*p_selectUsrSvtEnt, 0LL) )
            {
              v43 = this->fields.materialTdSprite;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEventSprite(v43, (System_String_o *)StringLiteral_21736, 0LL);
            }
            goto LABEL_22;
          }
        }
      }
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_22:
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
}


void __fastcall NpMaterialSvtInfo__setNpLvInfo(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  UserServantEntity_o *selectUsrSvtEnt; // x0
  UIIconLabel_o *iconLabel; // x0
  int32_t lv; // w2
  UnityEngine_GameObject_o *npLvInfo; // x0
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-8h] BYREF

  tdInfo = 0LL;
  selectUsrSvtEnt = this->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt || (UserServantEntity__getTreasureDeviceInfo(selectUsrSvtEnt, &tdInfo, -1, -1, 0, 0LL), !tdInfo) )
LABEL_9:
    sub_B170D4();
  iconLabel = this->fields.iconLabel;
  if ( tdInfo->fields.id < 1 )
  {
    lv = -1;
    if ( !iconLabel )
      goto LABEL_9;
  }
  else
  {
    lv = tdInfo->fields.lv;
    if ( !iconLabel )
      goto LABEL_9;
  }
  UIIconLabel__Set_40377052(iconLabel, 33, lv, tdInfo->fields.maxLv, 0, 0LL, 0, 0, 0, 0LL);
  npLvInfo = this->fields.npLvInfo;
  if ( !npLvInfo )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(npLvInfo, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpMaterialSvtInfo_ClickDelegate___ctor(
        NpMaterialSvtInfo_ClickDelegate_o *this,
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
System_IAsyncResult_o *__fastcall NpMaterialSvtInfo_ClickDelegate__BeginInvoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
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
  if ( (byte_40F835C & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&CombineMenuControl_TargetType_TypeInfo, v9);
    byte_40F835C = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(long_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall NpMaterialSvtInfo_ClickDelegate__EndInvoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpMaterialSvtInfo_ClickDelegate__Invoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
        int32_t type,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  NpMaterialSvtInfo_ClickDelegate_o **v8; // x26
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
  NpMaterialSvtInfo_ClickDelegate_o *v20; // x8
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
  NpMaterialSvtInfo_ClickDelegate_o *v33; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (NpMaterialSvtInfo_ClickDelegate_o **)(v4 + 32);
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