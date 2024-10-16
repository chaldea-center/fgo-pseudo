void __fastcall ServantBonusFilterEquipListViewObject___ctor(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB0CFC & 1) == 0 )
  {
    sub_1BAB41C(&ListViewObject_TypeInfo, method);
    byte_4AB0CFC = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


bool __fastcall ServantBonusFilterEquipListViewObject__IsSetFilter(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  void *dispObject; // x0

  if ( (byte_4AB0CF9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_4AB0CF9 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)dispObject,
                       (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_1BAB678(dispObject, method);
  }
  return *((_BYTE *)dispObject + 88);
}


void __fastcall ServantBonusFilterEquipListViewObject__ResetDisplayButton(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4AB0CF8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_4AB0CF8 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_1BAB678(dispObject, method);
  }
  LOBYTE(dispObject[3].fields.m_CachedPtr) = 0;
  ServantBonusFilterEquipListViewItemDraw__SetButton((ServantBonusFilterEquipListViewItemDraw_o *)dispObject, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewObject__SetButtonEnable(
        ServantBonusFilterEquipListViewObject_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4AB0CF7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, isEnable);
    byte_4AB0CF7 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL
    || (dispObject = (UnityEngine_GameObject_o *)dispObject[3].klass) == 0LL )
  {
    sub_1BAB678(dispObject, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dispObject, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(
        ServantBonusFilterEquipListViewObject_o *this,
        bool isOnOff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4AB0CFB & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, isOnOff);
    byte_4AB0CFB = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_1BAB678(dispObject, isOnOff);
  }
  LOBYTE(dispObject[4].monitor) = isOnOff;
}


void __fastcall ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4AB0CF6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_4AB0CF6 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_1BAB678(dispObject, method);
  }
  ServantBonusFilterEquipListViewItemDraw__SetInitButtonSelect(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewObject__SetItem(
        ServantBonusFilterEquipListViewObject_o *this,
        int32_t idx,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_4AB0CF2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, *(_QWORD *)&idx);
    byte_4AB0CF2 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_1BAB678(dispObject, *(_QWORD *)&idx);
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
void __fastcall ServantBonusFilterEquipListViewObject__SetItem_30823204(
        ServantBonusFilterEquipListViewObject_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4AB0CF3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, *(_QWORD *)&idx);
    byte_4AB0CF3 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_1BAB678(dispObject, *(_QWORD *)&idx);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_30827868(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    idx,
    eventIdList,
    filterGroupId,
    v10);
}


void __fastcall ServantBonusFilterEquipListViewObject__SetItem_30830740(
        ServantBonusFilterEquipListViewObject_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_4AB0CF4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, equipEntity);
    byte_4AB0CF4 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_1BAB678(dispObject, equipEntity);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_30826236(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    equipEntity,
    eventUpValInfos,
    skillInfos,
    saveKey,
    v12);
}


void __fastcall ServantBonusFilterEquipListViewObject__SetItem_30830876(
        ServantBonusFilterEquipListViewObject_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4AB0CF5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, eventIdList);
    byte_4AB0CF5 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_1BAB678(dispObject, eventIdList);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_30828012(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    eventIdList,
    filterGroupId,
    saveKey,
    v10);
}


void __fastcall ServantBonusFilterEquipListViewObject__UpdateFilterSave(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4AB0CFA & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_4AB0CFA = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_1BAB678(dispObject, method);
  }
  ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    method);
}