void NpMaterialSvtInfo___ctor(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  IconLabelInfo_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974B93 & 1) == 0 )
  {
    sub_2213A60(&IconLabelInfo_TypeInfo);
    byte_5974B93 = 1;
  }
  v3 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v3, 0);
  this->fields.iconLabelInfo = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NpMaterialSvtInfo__OnClickMaterialStatus(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  struct NpMaterialSvtInfo_ClickDelegate_o *callbackFunc; // x9

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
  struct NpMaterialSvtInfo_ClickDelegate_o *callbackFunc; // x9

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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  IconLabelInfo_o *iconLabelInfo; // x23
  int32_t m_CachedPtr; // w24
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_GameObject_o *v30; // x21
  __int64 v31; // x1
  UISprite_o *v32; // x21

  if ( (byte_5974B92 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_24320/*"ribbon_noblephantasmup_01"*/);
    byte_5974B92 = 1;
  }
  npLvInfo = this->fields.npLvInfo;
  this->fields.index = idx;
  this->fields.selectUsrSvtId = selectUsrSvtId;
  if ( !npLvInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(npLvInfo, 0, 0);
  npLvInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !npLvInfo )
    goto LABEL_21;
  npLvInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)npLvInfo,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !npLvInfo )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)npLvInfo,
             selectUsrSvtId,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.selectUsrSvtEnt = (struct UserServantEntity_o *)Entity;
  p_selectUsrSvtEnt = &this->fields.selectUsrSvtEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectUsrSvtEnt,
    (int32_t)Entity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  npLvInfo = (UnityEngine_GameObject_o *)this->fields.selectUsrSvtEnt;
  if ( !npLvInfo )
    goto LABEL_21;
  iconLabelInfo = this->fields.iconLabelInfo;
  m_CachedPtr = npLvInfo[16].fields.m_CachedPtr;
  npLvInfo = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)npLvInfo, 0);
  if ( !iconLabelInfo )
    goto LABEL_21;
  IconLabelInfo__Set_47880948(iconLabelInfo, 2, m_CachedPtr, (int32_t)npLvInfo, 0, 0, 0, 0, 0, 0);
  npLvInfo = (UnityEngine_GameObject_o *)this->fields.svtFaseIconComp;
  if ( !npLvInfo )
    goto LABEL_21;
  ServantFaceIconComponent__Set_48049308(
    (ServantFaceIconComponent_o *)npLvInfo,
    selectUsrSvtId,
    this->fields.iconLabelInfo,
    0,
    0);
  NpMaterialSvtInfo__setNpLvInfo(this, v21);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    npLvInfo = (UnityEngine_GameObject_o *)this->fields.materialTdSprite;
    if ( npLvInfo )
    {
      npLvInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)npLvInfo, 0);
      if ( *p_selectUsrSvtEnt )
      {
        v30 = npLvInfo;
        npLvInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsMaterialTd(*p_selectUsrSvtEnt, 0);
        if ( v30 )
        {
          UnityEngine_GameObject__SetActive(v30, (unsigned __int8)npLvInfo & 1, 0);
          npLvInfo = (UnityEngine_GameObject_o *)*p_selectUsrSvtEnt;
          if ( *p_selectUsrSvtEnt )
          {
            if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)npLvInfo, 0) )
            {
              v32 = this->fields.materialTdSprite;
              if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
              AtlasManager__SetEventSprite(v32, (System_String_o *)StringLiteral_24320/*"ribbon_noblephantasmup_01"*/, 0);
            }
            goto LABEL_20;
          }
        }
      }
    }
LABEL_21:
    sub_2213CDC(npLvInfo, *(_QWORD *)&idx);
  }
LABEL_20:
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void NpMaterialSvtInfo__setNpLvInfo(NpMaterialSvtInfo_o *this, const MethodInfo *method)
{
  UserServantEntity_o *selectUsrSvtEnt; // x0
  int32_t lv; // w2
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-18h] BYREF

  selectUsrSvtEnt = this->fields.selectUsrSvtEnt;
  tdInfo = 0;
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
    sub_2213CDC(selectUsrSvtEnt, method);
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
  UIIconLabel__Set_48071660((UIIconLabel_o *)selectUsrSvtEnt, 33, lv, tdInfo->fields.maxLv, 0, 0, 0, 0, 0, 0, 0);
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2014C50;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2014BF8;
}


System_IAsyncResult_o *NpMaterialSvtInfo_ClickDelegate__BeginInvoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
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
  if ( (byte_5974B94 & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TargetType_TypeInfo);
    byte_5974B94 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(CombineMenuControl_TargetType_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984368, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void NpMaterialSvtInfo_ClickDelegate__EndInvoke(
        NpMaterialSvtInfo_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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