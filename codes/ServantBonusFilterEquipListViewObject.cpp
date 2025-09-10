void ServantBonusFilterEquipListViewObject___ctor(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21D60 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C21D60 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


bool ServantBonusFilterEquipListViewObject__IsSetFilter(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  void *dispObject; // x0

  if ( (byte_4C21D5D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D5D = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_1C2D6EC(dispObject, method);
  }
  return *((_BYTE *)dispObject + 88);
}


void ServantBonusFilterEquipListViewObject__ResetDisplayButton(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4C21D5C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D5C = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_1C2D6EC(dispObject, method);
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

  if ( (byte_4C21D5B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D5B = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0
    || (dispObject = (UnityEngine_GameObject_o *)dispObject[3].klass) == 0 )
  {
    sub_1C2D6EC(dispObject, isEnable);
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

  if ( (byte_4C21D5F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D5F = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_1C2D6EC(dispObject, isOnOff);
  }
  LOBYTE(dispObject[4].fields.m_CachedPtr) = isOnOff;
}


void ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4C21D5A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D5A = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_1C2D6EC(dispObject, method);
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

  if ( (byte_4C21D56 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D56 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_1C2D6EC(dispObject, *(_QWORD *)&idx);
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
void ServantBonusFilterEquipListViewObject__SetItem_32368432(
        ServantBonusFilterEquipListViewObject_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        int32_t equipIdx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_4C21D57 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D57 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_1C2D6EC(dispObject, *(_QWORD *)&idx);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_32373108(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    idx,
    eventIdList,
    filterGroupId,
    equipIdx,
    v12);
}


void ServantBonusFilterEquipListViewObject__SetItem_32377644(
        ServantBonusFilterEquipListViewObject_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_4C21D58 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D58 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_1C2D6EC(dispObject, equipEntity);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_32371480(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    equipEntity,
    eventUpValInfos,
    skillInfos,
    saveKey,
    v12);
}


void ServantBonusFilterEquipListViewObject__SetItem_32377780(
        ServantBonusFilterEquipListViewObject_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        int32_t equipIdx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_4C21D59 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D59 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_1C2D6EC(dispObject, eventIdList);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_32373260(
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

  if ( (byte_4C21D5E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_4C21D5E = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0 )
  {
    sub_1C2D6EC(dispObject, method);
  }
  ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    method);
}