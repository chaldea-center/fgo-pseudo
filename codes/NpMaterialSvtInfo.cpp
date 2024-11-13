void __fastcall NpMaterialSvtInfo___ctor(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  IconLabelInfo_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19B44 & 1) == 0 )
  {
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, method, v2);
    byte_4B19B44 = 1;
  }
  v5 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, method, v2, v3);
  IconLabelInfo___ctor(v5, 0LL);
  this->fields.iconLabelInfo = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NpMaterialSvtInfo__OnClickMaterialStatus(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  struct NpMaterialSvtInfo_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, int64_t, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      this->fields.selectUsrSvtId,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall NpMaterialSvtInfo__OnClickMaterialSvt(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  struct NpMaterialSvtInfo_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, int64_t, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      this->fields.selectUsrSvtId,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *npLvInfo; // x0
  Il2CppObject *Entity; // x0
  UserServantEntity_o **p_selectUsrSvtEnt; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  IconLabelInfo_o *iconLabelInfo; // x23
  int32_t m_CachedPtr; // w24
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UnityEngine_GameObject_o *v40; // x21
  __int64 v41; // x1
  UISprite_o *v42; // x21

  if ( (byte_4B19B43 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&idx, baseData);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v18, v19);
    byte_4B19B43 = 1;
  }
  npLvInfo = this->fields.npLvInfo;
  this->fields.index = idx;
  this->fields.selectUsrSvtId = selectUsrSvtId;
  if ( !npLvInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(npLvInfo, 0, 0LL);
  npLvInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !npLvInfo )
    goto LABEL_21;
  npLvInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)npLvInfo,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !npLvInfo )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)npLvInfo,
             selectUsrSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = (struct UserServantEntity_o *)Entity;
  p_selectUsrSvtEnt = &this->fields.selectUsrSvtEnt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectUsrSvtEnt,
    (int64_t)Entity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  npLvInfo = (UnityEngine_GameObject_o *)this->fields.selectUsrSvtEnt;
  if ( !npLvInfo )
    goto LABEL_21;
  iconLabelInfo = this->fields.iconLabelInfo;
  m_CachedPtr = npLvInfo[10].fields.m_CachedPtr;
  npLvInfo = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)npLvInfo, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_21;
  IconLabelInfo__Set_38850420(iconLabelInfo, 2, m_CachedPtr, (int32_t)npLvInfo, 0, 0, 0, 0, 0LL);
  npLvInfo = (UnityEngine_GameObject_o *)this->fields.svtFaseIconComp;
  if ( !npLvInfo )
    goto LABEL_21;
  ServantFaceIconComponent__Set_38931044(
    (ServantFaceIconComponent_o *)npLvInfo,
    selectUsrSvtId,
    this->fields.iconLabelInfo,
    0LL,
    0LL);
  NpMaterialSvtInfo__setNpLvInfo(this, v31);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    npLvInfo = (UnityEngine_GameObject_o *)this->fields.materialTdSprite;
    if ( npLvInfo )
    {
      npLvInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)npLvInfo, 0LL);
      if ( *p_selectUsrSvtEnt )
      {
        v40 = npLvInfo;
        npLvInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsMaterialTd(*p_selectUsrSvtEnt, 0LL);
        if ( v40 )
        {
          UnityEngine_GameObject__SetActive(v40, (unsigned __int8)npLvInfo & 1, 0LL);
          npLvInfo = (UnityEngine_GameObject_o *)*p_selectUsrSvtEnt;
          if ( *p_selectUsrSvtEnt )
          {
            if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)npLvInfo, 0LL) )
            {
              v42 = this->fields.materialTdSprite;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41);
              AtlasManager__SetEventSprite(v42, (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, 0LL);
            }
            goto LABEL_20;
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(npLvInfo, *(_QWORD *)&idx);
  }
LABEL_20:
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v34, v35, v36, v37, v38, v39);
}


void __fastcall NpMaterialSvtInfo__setNpLvInfo(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  UserServantEntity_o *selectUsrSvtEnt; // x0
  int32_t lv; // w2
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-18h] BYREF

  tdInfo = 0LL;
  selectUsrSvtEnt = this->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt
    || (selectUsrSvtEnt = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo(
                                                   selectUsrSvtEnt,
                                                   &tdInfo,
                                                   -1,
                                                   -1,
                                                   0,
                                                   0LL),
        !tdInfo) )
  {
LABEL_9:
    sub_1BCAA3C(selectUsrSvtEnt, method);
  }
  selectUsrSvtEnt = (UserServantEntity_o *)this->fields.iconLabel;
  if ( tdInfo->fields.id < 1 )
  {
    lv = -1;
    if ( !selectUsrSvtEnt )
      goto LABEL_9;
  }
  else
  {
    lv = tdInfo->fields.lv;
    if ( !selectUsrSvtEnt )
      goto LABEL_9;
  }
  UIIconLabel__Set_38947284((UIIconLabel_o *)selectUsrSvtEnt, 33, lv, tdInfo->fields.maxLv, 0, 0LL, 0, 0, 0, 0LL);
  selectUsrSvtEnt = (UserServantEntity_o *)this->fields.npLvInfo;
  if ( !selectUsrSvtEnt )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectUsrSvtEnt, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpMaterialSvtInfo_ClickDelegate___ctor(
        NpMaterialSvtInfo_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A113FC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A113A4;
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
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+0h] [xbp-60h] BYREF
  int64_t v13; // [xsp+18h] [xbp-48h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = usrSvtId;
  v14 = type;
  if ( (byte_4B19B45 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, *(_QWORD *)&type, usrSvtId);
    sub_1BCA7E0(&CombineMenuControl_TargetType_TypeInfo, v9, v10);
    byte_4B19B45 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(long_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall NpMaterialSvtInfo_ClickDelegate__EndInvoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall NpMaterialSvtInfo_ClickDelegate__Invoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
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