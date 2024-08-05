void __fastcall NpMaterialSvtInfo___ctor(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A01D0C & 1) == 0 )
  {
    sub_1B64870(&IconLabelInfo_TypeInfo, method);
    byte_4A01D0C = 1;
  }
  v3 = (IconLabelInfo_o *)sub_1B64ABC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0LL);
  this->fields.iconLabelInfo = v3;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo, (int32_t)v3, v4, v5);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *npLvInfo; // x0
  Il2CppObject *Entity; // x0
  UserServantEntity_o **p_selectUsrSvtEnt; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  IconLabelInfo_o *iconLabelInfo; // x23
  int32_t m_CachedPtr; // w24
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_GameObject_o *v26; // x21
  UISprite_o *v27; // x21

  if ( (byte_4A01D0B & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&StringLiteral_22844/*"ribbon_noblephantasmup_01"*/, v14);
    byte_4A01D0B = 1;
  }
  npLvInfo = this->fields.npLvInfo;
  this->fields.index = idx;
  this->fields.selectUsrSvtId = selectUsrSvtId;
  if ( !npLvInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(npLvInfo, 0, 0LL);
  npLvInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !npLvInfo )
    goto LABEL_21;
  npLvInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)npLvInfo,
                                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !npLvInfo )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)npLvInfo,
             selectUsrSvtId,
             (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = (struct UserServantEntity_o *)Entity;
  p_selectUsrSvtEnt = &this->fields.selectUsrSvtEnt;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.selectUsrSvtEnt, (int32_t)Entity, v18, v19);
  npLvInfo = (UnityEngine_GameObject_o *)this->fields.selectUsrSvtEnt;
  if ( !npLvInfo )
    goto LABEL_21;
  iconLabelInfo = this->fields.iconLabelInfo;
  m_CachedPtr = npLvInfo[10].fields.m_CachedPtr;
  npLvInfo = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)npLvInfo, 0LL);
  if ( !iconLabelInfo )
    goto LABEL_21;
  IconLabelInfo__Set_37829740(iconLabelInfo, 2, m_CachedPtr, (int32_t)npLvInfo, 0, 0, 0, 0, 0LL);
  npLvInfo = (UnityEngine_GameObject_o *)this->fields.svtFaseIconComp;
  if ( !npLvInfo )
    goto LABEL_21;
  ServantFaceIconComponent__Set_37909072(
    (ServantFaceIconComponent_o *)npLvInfo,
    selectUsrSvtId,
    this->fields.iconLabelInfo,
    0LL,
    0LL);
  NpMaterialSvtInfo__setNpLvInfo(this, v22);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    npLvInfo = (UnityEngine_GameObject_o *)this->fields.materialTdSprite;
    if ( npLvInfo )
    {
      npLvInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)npLvInfo, 0LL);
      if ( *p_selectUsrSvtEnt )
      {
        v26 = npLvInfo;
        npLvInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsMaterialTd(*p_selectUsrSvtEnt, 0LL);
        if ( v26 )
        {
          UnityEngine_GameObject__SetActive(v26, (unsigned __int8)npLvInfo & 1, 0LL);
          npLvInfo = (UnityEngine_GameObject_o *)*p_selectUsrSvtEnt;
          if ( *p_selectUsrSvtEnt )
          {
            if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)npLvInfo, 0LL) )
            {
              v27 = this->fields.materialTdSprite;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetEventSprite(v27, (System_String_o *)StringLiteral_22844/*"ribbon_noblephantasmup_01"*/, 0LL);
            }
            goto LABEL_20;
          }
        }
      }
    }
LABEL_21:
    sub_1B64ACC(npLvInfo, *(_QWORD *)&idx);
  }
LABEL_20:
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v24, v25);
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
    sub_1B64ACC(selectUsrSvtEnt, method);
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
  UIIconLabel__Set_37925528((UIIconLabel_o *)selectUsrSvtEnt, 33, lv, tdInfo->fields.maxLv, 0, 0LL, 0, 0, 0, 0LL);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0C84;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0C2C;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+0h] [xbp-60h] BYREF
  int64_t v15; // [xsp+18h] [xbp-48h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = usrSvtId;
  v16 = type;
  if ( (byte_4A01D0D & 1) == 0 )
  {
    sub_1B64870(&long_TypeInfo, *(_QWORD *)&type);
    sub_1B64870(&CombineMenuControl_TargetType_TypeInfo, v9);
    byte_4A01D0D = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v16, usrSvtId, callback, object);
  v14[1] = j_il2cpp_value_box_0(long_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B64824(this, v14, callback, object);
}


void __fastcall NpMaterialSvtInfo_ClickDelegate__EndInvoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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