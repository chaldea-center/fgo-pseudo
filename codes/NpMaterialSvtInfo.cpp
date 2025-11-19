void NpMaterialSvtInfo___ctor(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CBA375 & 1) == 0 )
  {
    sub_1C6BA08(&IconLabelInfo_TypeInfo);
    byte_4CBA375 = 1;
  }
  v3 = (IconLabelInfo_o *)sub_1C6BC54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0);
  this->fields.iconLabelInfo = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NpMaterialSvtInfo__OnClickMaterialStatus(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  struct NpMaterialSvtInfo_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, int64_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      this->fields.selectUsrSvtId,
      callbackFunc->fields.method);
}


void NpMaterialSvtInfo__OnClickMaterialSvt(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  struct NpMaterialSvtInfo_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, int64_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      this->fields.selectUsrSvtId,
      callbackFunc->fields.method);
}


int32_t NpMaterialSvtInfo__getIndex(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


// local variable allocation has failed, the output may be wrong!
void NpMaterialSvtInfo__setMaterialSvtInfo(
        NpMaterialSvtInfo_o *this,
        int32_t idx,
        UserServantEntity_o *baseData,
        int64_t selectUsrSvtId,
        NpMaterialSvtInfo_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *npLvInfo; // x0
  Il2CppObject *Entity; // x0
  UserServantEntity_o **p_selectUsrSvtEnt; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  IconLabelInfo_o *iconLabelInfo; // x23
  int32_t m_CachedPtr; // w24
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *v21; // x21
  UISprite_o *v22; // x21

  if ( (byte_4CBA374 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_23207/*"ribbon_noblephantasmup_01"*/);
    byte_4CBA374 = 1;
  }
  npLvInfo = this->fields.npLvInfo;
  this->fields.index = idx;
  this->fields.selectUsrSvtId = selectUsrSvtId;
  if ( !npLvInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(npLvInfo, 0, 0);
  npLvInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !npLvInfo )
    goto LABEL_21;
  npLvInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)npLvInfo,
                                           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !npLvInfo )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)npLvInfo,
             selectUsrSvtId,
             (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = (struct UserServantEntity_o *)Entity;
  p_selectUsrSvtEnt = &this->fields.selectUsrSvtEnt;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectUsrSvtEnt, (int32_t)Entity, v13, v14);
  npLvInfo = (UnityEngine_GameObject_o *)this->fields.selectUsrSvtEnt;
  if ( !npLvInfo )
    goto LABEL_21;
  iconLabelInfo = this->fields.iconLabelInfo;
  m_CachedPtr = npLvInfo[10].fields.m_CachedPtr;
  npLvInfo = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)npLvInfo, 0);
  if ( !iconLabelInfo )
    goto LABEL_21;
  IconLabelInfo__Set_41149608(iconLabelInfo, 2, m_CachedPtr, (int32_t)npLvInfo, 0, 0, 0, 0, 0, 0);
  npLvInfo = (UnityEngine_GameObject_o *)this->fields.svtFaseIconComp;
  if ( !npLvInfo )
    goto LABEL_21;
  ServantFaceIconComponent__Set_41238940(
    (ServantFaceIconComponent_o *)npLvInfo,
    selectUsrSvtId,
    this->fields.iconLabelInfo,
    0,
    0);
  NpMaterialSvtInfo__setNpLvInfo(this, v17);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    npLvInfo = (UnityEngine_GameObject_o *)this->fields.materialTdSprite;
    if ( npLvInfo )
    {
      npLvInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)npLvInfo, 0);
      if ( *p_selectUsrSvtEnt )
      {
        v21 = npLvInfo;
        npLvInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsMaterialTd(*p_selectUsrSvtEnt, 0);
        if ( v21 )
        {
          UnityEngine_GameObject__SetActive(v21, (unsigned __int8)npLvInfo & 1, 0);
          npLvInfo = (UnityEngine_GameObject_o *)*p_selectUsrSvtEnt;
          if ( *p_selectUsrSvtEnt )
          {
            if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)npLvInfo, 0) )
            {
              v22 = this->fields.materialTdSprite;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetEventSprite(v22, (System_String_o *)StringLiteral_23207/*"ribbon_noblephantasmup_01"*/, 0);
            }
            goto LABEL_20;
          }
        }
      }
    }
LABEL_21:
    sub_1C6BC60(npLvInfo, *(_QWORD *)&idx);
  }
LABEL_20:
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
}


void NpMaterialSvtInfo__setNpLvInfo(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  UserServantEntity_o *selectUsrSvtEnt; // x0
  int32_t lv; // w2
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-18h] BYREF

  tdInfo = 0;
  selectUsrSvtEnt = this->fields.selectUsrSvtEnt;
  if ( !selectUsrSvtEnt
    || (selectUsrSvtEnt = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo(
                                                   selectUsrSvtEnt,
                                                   &tdInfo,
                                                   -1,
                                                   -1,
                                                   0,
                                                   0),
        !tdInfo) )
  {
LABEL_9:
    sub_1C6BC60(selectUsrSvtEnt, method);
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
  UIIconLabel__Set_41344128((UIIconLabel_o *)selectUsrSvtEnt, 33, lv, tdInfo->fields.maxLv, 0, 0, 0, 0, 0, 0, 0);
  selectUsrSvtEnt = (UserServantEntity_o *)this->fields.npLvInfo;
  if ( !selectUsrSvtEnt )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectUsrSvtEnt, 1, 0);
}


void NpMaterialSvtInfo_ClickDelegate___ctor(
        NpMaterialSvtInfo_ClickDelegate_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA68A0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA6848;
}


System_IAsyncResult_o *NpMaterialSvtInfo_ClickDelegate__BeginInvoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
        int32_t type,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-60h] BYREF
  int64_t v11; // [xsp+18h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = usrSvtId;
  v12 = type;
  if ( (byte_4CBA376 & 1) == 0 )
  {
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&CombineMenuControl_TargetType_TypeInfo);
    byte_4CBA376 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(long_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void NpMaterialSvtInfo_ClickDelegate__EndInvoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void NpMaterialSvtInfo_ClickDelegate__Invoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
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