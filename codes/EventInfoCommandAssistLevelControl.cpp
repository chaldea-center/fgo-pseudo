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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x21

  if ( (byte_4B16A11 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__, v9, v10);
    byte_4B16A11 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = (struct EventCommandAssistMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventCommandAssistMst,
    (int64_t)Master_object,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.eventUiEntity = entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUiEntity, (int64_t)entity, v18, v19, v20, v21, v22, v23);
  eventUiEntity = this->fields.eventUiEntity;
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)this,
    Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v28, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__OnClickDetailDialogButton(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v15; // x19
  int32_t eventId; // w20
  Il2CppObject *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x21

  if ( (byte_4B16A14 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B16A14 = 1;
  }
  v10 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v15 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20),
          System_Action___ctor(v21, v17, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v15) )
    {
      sub_1BCAA3C(Instance, v13);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v15, eventId, v21, 0LL);
  }
}


void __fastcall EventInfoCommandAssistLevelControl__OnDestroy(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BCAA3C(this, method);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x21
  int64_t Item; // x0
  Il2CppObject *v32; // x1
  int64_t v33; // x2
  __int64 v34; // x3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x22
  int max_length; // w8
  unsigned int v41; // w23
  int *monitor; // x8
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  int v47; // w24
  System_Action_o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  int32_t v52; // w23
  int v53; // w29
  __int64 v54; // x24
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  UnityEngine_Component_o **v61; // x25
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  System_Action_o *v69; // x27
  System_Action_o **v70; // x26
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x1
  UnityEngine_Object_o *v78; // x27
  const MethodInfo *v79; // x2
  UnityEngine_Component_o *v80; // x8
  System_Action_o *v81; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v83; // x1
  Il2CppObject *Component_object; // x27
  __int64 v85; // x3
  System_Action_o *v86; // x25
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  System_Action_o *v90; // x25
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Action_o *v94; // x25
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7

  if ( (byte_4B16A13 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&type, callback);
    sub_1BCA7E0(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__, v22, v23);
    sub_1BCA7E0(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__, v24, v25);
    sub_1BCA7E0(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__, v26, v27);
    sub_1BCA7E0(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v28, v29);
    byte_4B16A13 = 1;
  }
  if ( type == 1 )
  {
    v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo,
                                                         *(_QWORD *)&type,
                                                         callback,
                                                         method);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_47;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v41 = 0;
      while ( 1 )
      {
        if ( v41 >= max_length )
          sub_1BCAA44(Item, v32);
        v32 = (Il2CppObject *)assistCompnentList->m_Items[v41];
        if ( !v32 )
          break;
        monitor = (int *)v32[3].monitor;
        if ( !monitor )
          break;
        if ( monitor[6] <= 0 && monitor[5] >= 1 )
        {
          if ( !v30 )
            break;
          items = v30->fields._items;
          v44 = Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__;
          ++v30->fields._version;
          if ( !items )
            break;
          size = v30->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              v32,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v30->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v32;
            sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v32, v33, v34, v35, v36, v37, v38);
          }
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v41 >= max_length )
          goto LABEL_19;
      }
LABEL_47:
      sub_1BCAA3C(Item, v32);
    }
LABEL_19:
    if ( !v30 )
      goto LABEL_47;
    v47 = v30->fields._size;
    if ( v47 >= 1 )
    {
      v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
      System_Action___ctor(
        v48,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0LL);
      v52 = 0;
      v53 = -v47;
      while ( 1 )
      {
        v54 = sub_1BCAA2C(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v49, v50, v51);
        System_Object___ctor((Il2CppObject *)v54, 0LL);
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v30,
                          v52,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
        if ( !v54 )
          goto LABEL_47;
        *(_QWORD *)(v54 + 24) = Item;
        v61 = (UnityEngine_Component_o **)(v54 + 24);
        sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 24), Item, v55, v56, v57, v58, v59, v60);
        if ( v53 + v52 == -1 )
          v68 = (int64_t)v48;
        else
          v68 = 0LL;
        *(_QWORD *)(v54 + 16) = v68;
        if ( v53 + v52 == -1 )
          v69 = callback;
        else
          v69 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 16), v68, v62, v63, v64, v65, v66, v67);
        *(_QWORD *)(v54 + 32) = v69;
        v70 = (System_Action_o **)(v54 + 32);
        sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 32), (int64_t)v69, v71, v72, v73, v74, v75, v76);
        v78 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
        Item = UnityEngine_Object__op_Equality(v78, 0LL, 0LL);
        v80 = *v61;
        if ( (Item & 1) != 0 )
        {
          if ( !v80 )
            goto LABEL_47;
          v81 = *v70;
          Item = (int64_t)*v61;
        }
        else
        {
          if ( !v80 )
            goto LABEL_47;
          gameObject = UnityEngine_Component__get_gameObject(*v61, 0LL);
          GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v78, gameObject, 0LL);
          if ( !v78 )
            goto LABEL_47;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v78,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            v86 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v79, v85);
            System_Action___ctor(
              v86,
              (Il2CppObject *)v54,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0LL);
            if ( !Component_object )
              goto LABEL_47;
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v86, 0LL);
            v90 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v87, v88, v89);
            System_Action___ctor(
              v90,
              (Il2CppObject *)v54,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0LL);
            CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 1, v90, 0LL);
            v94 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v91, v92, v93);
            System_Action___ctor(
              v94,
              (Il2CppObject *)v54,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0LL);
            Component_object[2].monitor = v94;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&Component_object[2].monitor,
              (int64_t)v94,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100);
            goto LABEL_44;
          }
          Item = (int64_t)*v61;
          if ( !*v61 )
            goto LABEL_47;
          v81 = *v70;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp((EventInfoCommandAssistLevelComponent_o *)Item, v81, v79);
LABEL_44:
        ++v52;
        if ( !(v53 + v52) )
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
    sub_1BCAA3C(this, method);
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
      sub_1BCAA44(this, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  EventCommandAssistMaster_o *titleSprite; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v10; // x2
  __int64 v11; // x3
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventCommandAssistMaster_o *v13; // x20
  __int64 v14; // x26
  __int64 v15; // x27
  __int64 v16; // x28
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x29
  __int64 v18; // x22
  __int64 v19; // x2
  int32_t v20; // w23
  struct EventUiEntity_o *v21; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x24
  int32_t eventId; // w25
  int v24; // w8
  struct EventUiEntity_o *v25; // x8
  const MethodInfo *v26; // x3
  int seriazlier; // w8
  struct EventInfoCommandAssistLevelComponent_array *v28; // x8

  if ( (byte_4B16A12 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo, entitys, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    byte_4B16A12 = 1;
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
      sub_1BCAA3C(titleSprite, v7);
    }
    v13 = titleSprite;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    p_list = &titleSprite->fields.list;
    while ( (int)v14 < (signed int)assistCompnentList->max_length )
    {
      if ( !v13 )
        goto LABEL_42;
      if ( (int)v14 >= SLODWORD(v13->fields._MasterName_k__BackingField) )
        break;
      v18 = sub_1BCAA2C(EventInfoCommandAssistLevelComponent_AssistData_TypeInfo, v7, v10, v11);
      System_Object___ctor((Il2CppObject *)v18, 0LL);
      if ( (unsigned int)v14 >= LODWORD(v13->fields._MasterName_k__BackingField) )
        goto LABEL_44;
      if ( v18 )
      {
        v20 = *((_DWORD *)p_list + v14);
        *(_DWORD *)(v18 + 16) = v20;
        v21 = this->fields.eventUiEntity;
        if ( v21 )
        {
          eventCommandAssistMst = this->fields.eventCommandAssistMst;
          eventId = v21->fields.eventId;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
          if ( !byte_4B16A5F )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v19);
            byte_4B16A5F = 1;
          }
          titleSprite = (EventCommandAssistMaster_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
            titleSprite = (EventCommandAssistMaster_o *)TerminalPramsManager_TypeInfo;
          }
          if ( eventCommandAssistMst )
          {
            titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                          eventCommandAssistMst,
                                                          eventId,
                                                          v20,
                                                          titleSprite[2].fields._MasterName_k__BackingField[22].fields._stringLength,
                                                          0,
                                                          0LL);
            v24 = titleSprite ? LODWORD(titleSprite->fields._lookup) : 0;
            *(_DWORD *)(v18 + 24) = v24;
            v25 = this->fields.eventUiEntity;
            if ( v25 )
            {
              titleSprite = this->fields.eventCommandAssistMst;
              if ( titleSprite )
              {
                titleSprite = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                              titleSprite,
                                                              v25->fields.eventId,
                                                              *(_DWORD *)(v18 + 16),
                                                              -1,
                                                              0,
                                                              0LL);
                if ( !titleSprite )
                  v16 = v18;
                if ( titleSprite )
                  v15 = v18;
                if ( titleSprite )
                {
                  if ( !v15 )
                    goto LABEL_42;
                  *(_DWORD *)(v15 + 20) = titleSprite->fields._lookup;
                  seriazlier = (int)titleSprite->fields.seriazlier;
                }
                else
                {
                  if ( !v16 )
                    goto LABEL_42;
                  seriazlier = 0;
                  *(_DWORD *)(v16 + 20) = 0;
                }
                *(_DWORD *)(v18 + 28) = seriazlier;
                v28 = this->fields.assistCompnentList;
                if ( v28 )
                {
                  if ( (unsigned int)v14 >= v28->max_length )
LABEL_44:
                    sub_1BCAA44(titleSprite, v7);
                  titleSprite = (EventCommandAssistMaster_o *)v28->m_Items[v14];
                  if ( titleSprite )
                  {
                    EventInfoCommandAssistLevelComponent__Setup(
                      (EventInfoCommandAssistLevelComponent_o *)titleSprite,
                      this,
                      (EventInfoCommandAssistLevelComponent_AssistData_o *)v18,
                      v26);
                    assistCompnentList = this->fields.assistCompnentList;
                    ++v14;
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
    sub_1BCAA3C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B16A15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, method, v2);
    byte_4B16A15 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0LL) )
  {
    v4 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySe(v5, this->fields.seName, 0LL);
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
    sub_1BCAA3C(0LL, method);
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

  if ( (byte_4B16A16 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B16A16 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13807 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13807 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  assistComponent = this->fields.assistComponent;
  if ( !assistComponent )
    sub_1BCAA3C(0LL, method);
  assistData = assistComponent->fields.assistData;
  if ( assistData )
  {
    lv = assistData->fields.lv;
    assistData->fields.oldLv = lv;
    EventInfoCommandAssistLevelComponent__SetupLevel(assistComponent, lv, v2);
  }
  ActionExtensions__Call(this->fields.endAction, 0LL);
}