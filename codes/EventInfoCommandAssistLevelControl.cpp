void __fastcall EventInfoCommandAssistLevelControl___ctor(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__Initialization(
        EventInfoCommandAssistLevelControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21

  if ( (byte_49FCF78 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__, v7);
    byte_49FCF78 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = (struct EventCommandAssistMaster_o *)Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventCommandAssistMst, (int32_t)Master_object, v9, v10);
  this->fields.eventUiEntity = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v11, v12);
  eventUiEntity = this->fields.eventUiEntity;
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v16, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__OnClickDetailDialogButton(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v10; // x19
  int32_t eventId; // w20
  Il2CppObject *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21

  if ( (byte_49FCF7B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v3);
    sub_1B640C8(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FCF7B = 1;
  }
  v6 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v10 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
          System_Action___ctor(v15, v12, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v10) )
    {
      sub_1B64324(Instance);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v10, eventId, v15, 0LL);
  }
}


void __fastcall EventInfoCommandAssistLevelControl__OnDestroy(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B64324(this);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCommandAssistLevelControl__PlayAnim(
        EventInfoCommandAssistLevelControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x21
  EventInfoCommandAssistLevelComponent_o *Item; // x0
  Il2CppObject *v20; // x1
  __int64 v21; // x2
  int32_t v22; // w3
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x22
  int max_length; // w8
  unsigned int v25; // w23
  int *monitor; // x8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int v31; // w24
  System_Action_o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t v35; // w23
  int v36; // w29
  __int64 v37; // x24
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_Component_o **v40; // x25
  int32_t v41; // w2
  int32_t v42; // w3
  System_Action_o *v43; // x1
  System_Action_o *v44; // x27
  System_Action_o **v45; // x26
  int32_t v46; // w2
  int32_t v47; // w3
  UnityEngine_Object_o *v48; // x27
  const MethodInfo *v49; // x2
  UnityEngine_Component_o *v50; // x8
  System_Action_o *v51; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x27
  __int64 v54; // x1
  System_Action_o *v55; // x25
  __int64 v56; // x1
  __int64 v57; // x2
  System_Action_o *v58; // x25
  __int64 v59; // x1
  __int64 v60; // x2
  System_Action_o *v61; // x25
  int32_t v62; // w2
  int32_t v63; // w3

  if ( (byte_49FCF7A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__, v14);
    sub_1B640C8(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__, v15);
    sub_1B640C8(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__, v16);
    sub_1B640C8(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v17);
    byte_49FCF7A = 1;
  }
  if ( type == 1 )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo,
                                                         *(_QWORD *)&type,
                                                         callback);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_47;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= max_length )
          sub_1B6432C(Item, v20);
        v20 = (Il2CppObject *)assistCompnentList->m_Items[v25];
        if ( !v20 )
          break;
        monitor = (int *)v20[3].monitor;
        if ( !monitor )
          break;
        if ( monitor[6] <= 0 && monitor[5] >= 1 )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              v20,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v20;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v20, v21, v22);
          }
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v25 >= max_length )
          goto LABEL_19;
      }
LABEL_47:
      sub_1B64324(Item);
    }
LABEL_19:
    if ( !v18 )
      goto LABEL_47;
    v31 = v18->fields._size;
    if ( v31 >= 1 )
    {
      v32 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
      System_Action___ctor(
        v32,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0LL);
      v35 = 0;
      v36 = -v31;
      while ( 1 )
      {
        v37 = sub_1B64314(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v33, v34);
        System_Object___ctor((Il2CppObject *)v37, 0LL);
        Item = (EventInfoCommandAssistLevelComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                           v18,
                                                           v35,
                                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
        if ( !v37 )
          goto LABEL_47;
        *(_QWORD *)(v37 + 24) = Item;
        v40 = (UnityEngine_Component_o **)(v37 + 24);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)Item, v38, v39);
        if ( v36 + v35 == -1 )
          v43 = v32;
        else
          v43 = 0LL;
        *(_QWORD *)(v37 + 16) = v43;
        if ( v36 + v35 == -1 )
          v44 = callback;
        else
          v44 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 16), (int32_t)v43, v41, v42);
        *(_QWORD *)(v37 + 32) = v44;
        v45 = (System_Action_o **)(v37 + 32);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v44, v46, v47);
        v48 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Item = (EventInfoCommandAssistLevelComponent_o *)UnityEngine_Object__op_Equality(v48, 0LL, 0LL);
        v50 = *v40;
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          if ( !v50 )
            goto LABEL_47;
          v51 = *v45;
          Item = (EventInfoCommandAssistLevelComponent_o *)*v40;
        }
        else
        {
          if ( !v50 )
            goto LABEL_47;
          gameObject = UnityEngine_Component__get_gameObject(*v40, 0LL);
          GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v48, gameObject, 0LL);
          if ( !v48 )
            goto LABEL_47;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v48,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            v55 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v54, v49);
            System_Action___ctor(
              v55,
              (Il2CppObject *)v37,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0LL);
            if ( !Component_object )
              goto LABEL_47;
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v55, 0LL);
            v58 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v56, v57);
            System_Action___ctor(
              v58,
              (Il2CppObject *)v37,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0LL);
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v58, 0LL);
            v61 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v59, v60);
            System_Action___ctor(
              v61,
              (Il2CppObject *)v37,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0LL);
            Component_object[2].monitor = v61;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v61, v62, v63);
            goto LABEL_44;
          }
          Item = (EventInfoCommandAssistLevelComponent_o *)*v40;
          if ( !*v40 )
            goto LABEL_47;
          v51 = *v45;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp(Item, v51, v49);
LABEL_44:
        ++v35;
        if ( !(v36 + v35) )
          return;
      }
    }
  }
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__Redisplay(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventInfoCommandAssistLevelControl_o *v3; // x19
  __int64 v4; // x21
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v5; // x22
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v6; // x23
  int max_length; // w9
  EventInfoCommandAssistLevelComponent_o *v8; // x20
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x24
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v11; // x2
  int32_t assetData; // w8
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v13; // x8
  const MethodInfo *v14; // x2
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v15; // x8
  int32_t lv; // w1

  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
LABEL_22:
    sub_1B64324(this);
  v3 = this;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = assistCompnentList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B6432C(this, method);
    v8 = assistCompnentList->m_Items[v4];
    if ( !v8 )
      goto LABEL_22;
    assistData = v8->fields.assistData;
    if ( assistData )
    {
      eventUiEntity = v3->fields.eventUiEntity;
      if ( !eventUiEntity )
        goto LABEL_22;
      this = (EventInfoCommandAssistLevelControl_o *)v3->fields.eventCommandAssistMst;
      if ( !this )
        goto LABEL_22;
      this = (EventInfoCommandAssistLevelControl_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                       (EventCommandAssistMaster_o *)this,
                                                       eventUiEntity->fields.eventId,
                                                       assistData->fields.assistId,
                                                       -1,
                                                       0,
                                                       0LL);
      if ( !this )
        v6 = assistData;
      if ( this )
        v5 = assistData;
      if ( this )
      {
        if ( !v5 )
          goto LABEL_22;
        v5->fields.lv = this->fields.playType;
        assetData = (int32_t)this->fields.assetData;
      }
      else
      {
        if ( !v6 )
          goto LABEL_22;
        assetData = 0;
        v6->fields.lv = 0;
      }
      assistData->fields.imageId = assetData;
      v13 = v8->fields.assistData;
      if ( v13 )
      {
        EventInfoCommandAssistLevelComponent__SetupIcon(v8, v13->fields.lv, v11);
        v15 = v8->fields.assistData;
        if ( v15 )
        {
          lv = v15->fields.lv;
          v15->fields.oldLv = lv;
          EventInfoCommandAssistLevelComponent__SetupLevel(v8, lv, v14);
        }
      }
    }
    assistCompnentList = v3->fields.assistCompnentList;
    ++v4;
    if ( !assistCompnentList )
      goto LABEL_22;
  }
}


void __fastcall EventInfoCommandAssistLevelControl__SetSprite(
        EventInfoCommandAssistLevelControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, sprite, spriteName, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__Setup(
        EventInfoCommandAssistLevelControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventCommandAssistMaster_o *titleSprite; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventCommandAssistMaster_o *v11; // x20
  __int64 v12; // x26
  __int64 v13; // x27
  __int64 v14; // x28
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x29
  __int64 v16; // x22
  __int64 v17; // x1
  int32_t v18; // w23
  struct EventUiEntity_o *v19; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x24
  int32_t eventId; // w25
  int v22; // w8
  struct EventUiEntity_o *v23; // x8
  const MethodInfo *v24; // x3
  int seriazlier; // w8
  struct EventInfoCommandAssistLevelComponent_array *v26; // x8

  if ( (byte_49FCF79 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo, entitys);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49FCF79 = 1;
  }
  if ( entitys )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.titleSprite,
      this->fields.titleSpriteName,
      0LL);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.titleSprite;
    if ( !titleSprite )
      goto LABEL_42;
    ((void (__fastcall *)(EventCommandAssistMaster_o *, Il2CppMethodPointer))titleSprite->klass[1].vtable._5_ForForceDerived.method)(
      titleSprite,
      titleSprite->klass[1].vtable._6_preProcess.methodPtr);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.bgSprite,
      this->fields.bgSpriteName,
      0LL);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.bgSprite;
    if ( !titleSprite )
      goto LABEL_42;
    ((void (__fastcall *)(EventCommandAssistMaster_o *, Il2CppMethodPointer))titleSprite->klass[1].vtable._5_ForForceDerived.method)(
      titleSprite,
      titleSprite->klass[1].vtable._6_preProcess.methodPtr);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.detailDialogButtonSprite,
      this->fields.buttonSpriteName,
      0LL);
    titleSprite = (EventCommandAssistMaster_o *)this->fields.detailDialogButtonSprite;
    if ( !titleSprite
      || (titleSprite = (EventCommandAssistMaster_o *)((__int64 (__fastcall *)(EventCommandAssistMaster_o *, Il2CppMethodPointer))titleSprite->klass[1].vtable._5_ForForceDerived.method)(
                                                        titleSprite,
                                                        titleSprite->klass[1].vtable._6_preProcess.methodPtr),
          (eventUiEntity = this->fields.eventUiEntity) == 0LL)
      || (titleSprite = this->fields.eventCommandAssistMst) == 0LL
      || (titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                        titleSprite,
                                                        eventUiEntity->fields.eventId,
                                                        0LL),
          (assistCompnentList = this->fields.assistCompnentList) == 0LL) )
    {
LABEL_42:
      sub_1B64324(titleSprite);
    }
    v11 = titleSprite;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    p_list = &titleSprite->fields.list;
    while ( (int)v12 < (signed int)assistCompnentList->max_length )
    {
      if ( !v11 )
        goto LABEL_42;
      if ( (int)v12 >= SLODWORD(v11->fields._MasterName_k__BackingField) )
        break;
      v16 = sub_1B64314(EventInfoCommandAssistLevelComponent_AssistData_TypeInfo, v8, v9);
      System_Object___ctor((Il2CppObject *)v16, 0LL);
      if ( (unsigned int)v12 >= LODWORD(v11->fields._MasterName_k__BackingField) )
        goto LABEL_44;
      if ( v16 )
      {
        v18 = *((_DWORD *)p_list + v12);
        *(_DWORD *)(v16 + 16) = v18;
        v19 = this->fields.eventUiEntity;
        if ( v19 )
        {
          eventCommandAssistMst = this->fields.eventCommandAssistMst;
          eventId = v19->fields.eventId;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49FCFC9 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v17);
            byte_49FCFC9 = 1;
          }
          titleSprite = (EventCommandAssistMaster_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            titleSprite = (EventCommandAssistMaster_o *)TerminalPramsManager_TypeInfo;
          }
          if ( eventCommandAssistMst )
          {
            titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                          eventCommandAssistMst,
                                                          eventId,
                                                          v18,
                                                          titleSprite[2].fields._MasterName_k__BackingField[22].fields._stringLength,
                                                          0,
                                                          0LL);
            v22 = titleSprite ? LODWORD(titleSprite->fields._lookup) : 0;
            *(_DWORD *)(v16 + 24) = v22;
            v23 = this->fields.eventUiEntity;
            if ( v23 )
            {
              titleSprite = this->fields.eventCommandAssistMst;
              if ( titleSprite )
              {
                titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                              titleSprite,
                                                              v23->fields.eventId,
                                                              *(_DWORD *)(v16 + 16),
                                                              -1,
                                                              0,
                                                              0LL);
                if ( !titleSprite )
                  v14 = v16;
                if ( titleSprite )
                  v13 = v16;
                if ( titleSprite )
                {
                  if ( !v13 )
                    goto LABEL_42;
                  *(_DWORD *)(v13 + 20) = titleSprite->fields._lookup;
                  seriazlier = (int)titleSprite->fields.seriazlier;
                }
                else
                {
                  if ( !v14 )
                    goto LABEL_42;
                  seriazlier = 0;
                  *(_DWORD *)(v14 + 20) = 0;
                }
                *(_DWORD *)(v16 + 28) = seriazlier;
                v26 = this->fields.assistCompnentList;
                if ( v26 )
                {
                  if ( (unsigned int)v12 >= v26->max_length )
LABEL_44:
                    sub_1B6432C(titleSprite, v17);
                  titleSprite = (EventCommandAssistMaster_o *)v26->m_Items[v12];
                  if ( titleSprite )
                  {
                    EventInfoCommandAssistLevelComponent__Setup(
                      (EventInfoCommandAssistLevelComponent_o *)titleSprite,
                      this,
                      (EventInfoCommandAssistLevelComponent_AssistData_o *)v16,
                      v24);
                    assistCompnentList = this->fields.assistCompnentList;
                    ++v12;
                    if ( assistCompnentList )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_42;
    }
  }
}


void __fastcall EventInfoCommandAssistLevelControl___Initialization_b__13_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B64324(this);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_49FCF7C & 1) == 0 )
  {
    sub_1B640C8(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, method);
    byte_49FCF7C = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0LL) )
  {
    v3 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySe(v4, this->fields.seName, 0LL);
  }
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___ctor(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__1(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.startAction, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__2(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoCommandAssistLevelComponent_o *assistComponent; // x0
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8

  assistComponent = this->fields.assistComponent;
  if ( !assistComponent )
    sub_1B64324(0LL);
  assistData = assistComponent->fields.assistData;
  if ( assistData )
    EventInfoCommandAssistLevelComponent__SetupIcon(assistComponent, assistData->fields.lv, v2);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__3(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  struct EventInfoCommandAssistLevelComponent_o *assistComponent; // x0
  struct EventInfoCommandAssistLevelComponent_AssistData_o *assistData; // x8
  int32_t lv; // w1

  if ( (byte_49FCF7D & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49FCF7D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9AC5 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9AC5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  assistComponent = this->fields.assistComponent;
  if ( !assistComponent )
    sub_1B64324(0LL);
  assistData = assistComponent->fields.assistData;
  if ( assistData )
  {
    lv = assistData->fields.lv;
    assistData->fields.oldLv = lv;
    EventInfoCommandAssistLevelComponent__SetupLevel(assistComponent, lv, v2);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}