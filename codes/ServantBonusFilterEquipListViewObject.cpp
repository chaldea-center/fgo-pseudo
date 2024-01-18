void __fastcall ServantBonusFilterEquipListViewObject___ctor(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187C0B & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4187C0B = 1;
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

  if ( (byte_4187C08 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_4187C08 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       (UnityEngine_GameObject_o *)dispObject,
                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B2C434(dispObject, method);
  }
  return *((_BYTE *)dispObject + 80);
}


void __fastcall ServantBonusFilterEquipListViewObject__ResetDisplayButton(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4187C07 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_4187C07 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B2C434(dispObject, method);
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

  if ( (byte_4187C06 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, isEnable);
    byte_4187C06 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL
    || (dispObject = *(UnityEngine_GameObject_o **)&dispObject[2].fields.m_CachedPtr) == 0LL )
  {
    sub_B2C434(dispObject, isEnable);
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

  if ( (byte_4187C0A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, isOnOff);
    byte_4187C0A = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B2C434(dispObject, isOnOff);
  }
  LOBYTE(dispObject[4].klass) = isOnOff;
}


void __fastcall ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4187C05 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_4187C05 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B2C434(dispObject, method);
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

  if ( (byte_4187C01 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, *(_QWORD *)&idx);
    byte_4187C01 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B2C434(dispObject, *(_QWORD *)&idx);
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
void __fastcall ServantBonusFilterEquipListViewObject__SetItem_25357260(
        ServantBonusFilterEquipListViewObject_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4187C02 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, *(_QWORD *)&idx);
    byte_4187C02 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B2C434(dispObject, *(_QWORD *)&idx);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_25361644(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    idx,
    eventIdList,
    filterGroupId,
    v10);
}


void __fastcall ServantBonusFilterEquipListViewObject__SetItem_25364452(
        ServantBonusFilterEquipListViewObject_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v12; // x5

  if ( (byte_4187C03 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, equipEntity);
    byte_4187C03 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B2C434(dispObject, equipEntity);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_25359972(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    equipEntity,
    eventUpValInfos,
    skillInfos,
    saveKey,
    v12);
}


void __fastcall ServantBonusFilterEquipListViewObject__SetItem_25364592(
        ServantBonusFilterEquipListViewObject_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4187C04 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, eventIdList);
    byte_4187C04 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B2C434(dispObject, eventIdList);
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_25361792(
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

  if ( (byte_4187C09 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_4187C09 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dispObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B2C434(dispObject, method);
  }
  ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
    (ServantBonusFilterEquipListViewItemDraw_o *)dispObject,
    method);
}