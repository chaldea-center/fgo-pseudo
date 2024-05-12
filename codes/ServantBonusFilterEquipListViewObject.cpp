void __fastcall ServantBonusFilterEquipListViewObject___ctor(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_438C53F & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_438C53F = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


bool __fastcall ServantBonusFilterEquipListViewObject__IsSetFilter(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  void *dispObject; // x0

  if ( (byte_438C53C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C53C = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)dispObject,
                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, method);
  }
  return *((_BYTE *)dispObject + 80);
}


void __fastcall ServantBonusFilterEquipListViewObject__ResetDisplayButton(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_438C53B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C53B = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, method);
  }
  LOBYTE(dispObject[3].monitor) = 0;
  ServantBonusFilterEquipListViewItemDraw__SetButton((ServantBonusFilterEquipListViewItemDraw_o *)dispObject, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewObject__SetButtonEnable(
        ServantBonusFilterEquipListViewObject_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_438C53A & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C53A = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL
    || (dispObject = *(UnityEngine_GameObject_o **)&dispObject[2].fields.m_CachedPtr) == 0LL )
  {
    sub_B7769C(dispObject, isEnable);
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

  if ( (byte_438C53E & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C53E = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, isOnOff);
  }
  LOBYTE(dispObject[4].klass) = isOnOff;
}


void __fastcall ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_438C539 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C539 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, method);
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

  if ( (byte_438C535 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C535 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, *(_QWORD *)&idx);
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
void __fastcall ServantBonusFilterEquipListViewObject__SetItem_27453916(
        ServantBonusFilterEquipListViewObject_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v10; // x4

  if ( (byte_438C536 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C536 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, *(_QWORD *)&idx);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_27458300(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    idx,
    eventIdList,
    filterGroupId,
    v10);
}


void __fastcall ServantBonusFilterEquipListViewObject__SetItem_27461120(
        ServantBonusFilterEquipListViewObject_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_438C537 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C537 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, equipEntity);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_27456628(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    equipEntity,
    eventUpValInfos,
    skillInfos,
    saveKey,
    v12);
}


void __fastcall ServantBonusFilterEquipListViewObject__SetItem_27461260(
        ServantBonusFilterEquipListViewObject_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v10; // x4

  if ( (byte_438C538 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C538 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, eventIdList);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_27458448(
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

  if ( (byte_438C53D & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___);
    byte_438C53D = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B7769C(dispObject, method);
  }
  ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    method);
}