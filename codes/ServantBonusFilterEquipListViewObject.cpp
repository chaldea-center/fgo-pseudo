void __fastcall ServantBonusFilterEquipListViewObject___ctor(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F949C & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40F949C = 1;
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
  UnityEngine_GameObject_o *dispObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_40F9499 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_40F9499 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    dispObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  return Component_srcLineSprite->fields.miLineH;
}


void __fastcall ServantBonusFilterEquipListViewObject__ResetDisplayButton(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  ServantBonusFilterEquipListViewItemDraw_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F9498 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_40F9498 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (ServantBonusFilterEquipListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  Component_srcLineSprite->fields.isButtonOn = 0;
  ServantBonusFilterEquipListViewItemDraw__SetButton(Component_srcLineSprite, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewObject__SetButtonEnable(
        ServantBonusFilterEquipListViewObject_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_Behaviour_o *mcTweenScaleP; // x0

  if ( (byte_40F9497 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, isEnable);
    byte_40F9497 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    dispObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL
    || (mcTweenScaleP = (UnityEngine_Behaviour_o *)Component_srcLineSprite->fields.mcTweenScaleP) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(mcTweenScaleP, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewObject__SetButtonOnOffLabel(
        ServantBonusFilterEquipListViewObject_o *this,
        bool isOnOff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_40F949B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, isOnOff);
    byte_40F949B = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    dispObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  LOBYTE(Component_srcLineSprite->fields.mcTo.fields.y) = isOnOff;
}


void __fastcall ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  ServantBonusFilterEquipListViewItemDraw_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F9496 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_40F9496 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (ServantBonusFilterEquipListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  ServantBonusFilterEquipListViewItemDraw__SetInitButtonSelect(Component_srcLineSprite, v5);
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
  ServantBonusFilterEquipListViewItemDraw_o *Component_srcLineSprite; // x0
  const MethodInfo *v13; // x5

  if ( (byte_40F9492 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, *(_QWORD *)&idx);
    byte_40F9492 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (ServantBonusFilterEquipListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem(
    Component_srcLineSprite,
    idx,
    equipEntity,
    eventUpValInfos,
    skillInfos,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewObject__SetItem_23826912(
        ServantBonusFilterEquipListViewObject_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  ServantBonusFilterEquipListViewItemDraw_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x4

  if ( (byte_40F9493 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, *(_QWORD *)&idx);
    byte_40F9493 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (ServantBonusFilterEquipListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_23831296(
    Component_srcLineSprite,
    idx,
    eventIdList,
    filterGroupId,
    v11);
}


void __fastcall ServantBonusFilterEquipListViewObject__SetItem_23834104(
        ServantBonusFilterEquipListViewObject_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  ServantBonusFilterEquipListViewItemDraw_o *Component_srcLineSprite; // x0
  const MethodInfo *v13; // x5

  if ( (byte_40F9494 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, equipEntity);
    byte_40F9494 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (ServantBonusFilterEquipListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_23829624(
    Component_srcLineSprite,
    equipEntity,
    eventUpValInfos,
    skillInfos,
    saveKey,
    v13);
}


void __fastcall ServantBonusFilterEquipListViewObject__SetItem_23834244(
        ServantBonusFilterEquipListViewObject_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  ServantBonusFilterEquipListViewItemDraw_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x4

  if ( (byte_40F9495 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, eventIdList);
    byte_40F9495 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (ServantBonusFilterEquipListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  ServantBonusFilterEquipListViewItemDraw__SetItem_23831444(
    Component_srcLineSprite,
    eventIdList,
    filterGroupId,
    saveKey,
    v11);
}


void __fastcall ServantBonusFilterEquipListViewObject__UpdateFilterSave(
        ServantBonusFilterEquipListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  ServantBonusFilterEquipListViewItemDraw_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F949A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___, method);
    byte_40F949A = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (ServantBonusFilterEquipListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewItemDraw___)) == 0LL )
  {
    sub_B170D4();
  }
  ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(Component_srcLineSprite, v5);
}