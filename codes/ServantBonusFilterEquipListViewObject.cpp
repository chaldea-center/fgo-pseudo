void ServantBonusFilterEquipListViewObject___ctor(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932FB1 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5932FB1 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


bool ServantBonusFilterEquipListViewObject__IsSetFilter(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  void *dispObject; // x0

  if ( (byte_5932FAE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FAE = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_21FFECC(dispObject, method);
  }
  return *((_BYTE *)dispObject + 88);
}


void ServantBonusFilterEquipListViewObject__ResetDisplayButton(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_5932FAD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FAD = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_21FFECC(dispObject, method);
  }
  LOBYTE(dispObject[3].fields.m_CachedPtr) = 0;
  ServantBonusFilterEquipListViewItemDraw__SetButton((ServantBonusFilterEquipListViewItemDraw_o *)dispObject, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantBonusFilterEquipListViewObject__SetButtonEnable(
        ServantBonusFilterEquipListViewObject_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_5932FAC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FAC = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0
    || (dispObject = (UnityEngine_GameObject_o *)dispObject[3].klass) == 0 )
  {
    sub_21FFECC(dispObject, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dispObject, isEnable, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(
        ServantBonusFilterEquipListViewObject_o *this,
        bool isOnOff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_5932FB0 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FB0 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_21FFECC(dispObject, isOnOff);
  }
  LOBYTE(dispObject[4].fields.m_CachedPtr) = isOnOff;
}


void ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_5932FAB & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FAB = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_21FFECC(dispObject, method);
  }
  ServantBonusFilterEquipListViewItemDraw__SetInitButtonSelect(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    method);
}


// local variable allocation has failed, the output may be wrong!
void ServantBonusFilterEquipListViewObject__SetItem(
        ServantBonusFilterEquipListViewObject_o *this,
        int32_t idx,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_5932FA7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FA7 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_21FFECC(dispObject, *(_QWORD *)&idx);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    idx,
    equipEntity,
    eventUpValInfos,
    skillInfos,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void ServantBonusFilterEquipListViewObject__SetItem_39410684(
        ServantBonusFilterEquipListViewObject_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        int32_t equipIdx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_5932FA8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FA8 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_21FFECC(dispObject, *(_QWORD *)&idx);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_39415156(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    idx,
    eventIdList,
    filterGroupId,
    equipIdx,
    v12);
}


void ServantBonusFilterEquipListViewObject__SetItem_39419668(
        ServantBonusFilterEquipListViewObject_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_5932FA9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FA9 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_21FFECC(dispObject, equipEntity);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_39413564(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    equipEntity,
    eventUpValInfos,
    skillInfos,
    saveKey,
    v12);
}


void ServantBonusFilterEquipListViewObject__SetItem_39419804(
        ServantBonusFilterEquipListViewObject_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        int32_t equipIdx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_5932FAA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FAA = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_21FFECC(dispObject, eventIdList);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_39415308(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    eventIdList,
    filterGroupId,
    saveKey,
    equipIdx,
    v12);
}


void ServantBonusFilterEquipListViewObject__UpdateFilterSave(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_5932FAF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_5932FAF = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_21FFECC(dispObject, method);
  }
  ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    method);
}