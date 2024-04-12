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
  struct EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v19; // x21

  if ( (byte_42B0DA7 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__);
    byte_42B0DA7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = Master_WarQuestSelectionMaster;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventCommandAssistMst,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.eventUiEntity = entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  eventUiEntity = this->fields.eventUiEntity;
  v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v19, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__OnClickDetailDialogButton(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v8; // x19
  int32_t eventId; // w20
  Il2CppObject *v10; // x22
  System_Action_o *v11; // x21

  if ( (byte_42B0DAA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CommonUI_CloseCommandAssistConfirmDialog__);
    sub_B52984(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0DAA = 1;
  }
  v3 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v8 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v10 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
          System_Action___ctor(v11, v10, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v8) )
    {
      sub_B52A5C(Instance, v6);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v8, eventId, v11, 0LL);
  }
}


void __fastcall EventInfoCommandAssistLevelControl__OnDestroy(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B52A5C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__PlayAnim(
        EventInfoCommandAssistLevelControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  UnityEngine_Component_o *v7; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x1
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x19
  int max_length; // w8
  unsigned int v11; // w22
  int *monitor; // x8
  signed __int64 size; // x27
  System_Action_o *v14; // x22
  unsigned __int64 v15; // x28
  __int64 v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  UnityEngine_Component_o **v24; // x24
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_Int32_array **v32; // x26
  System_Action_o **v33; // x25
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *v40; // x26
  const MethodInfo *v41; // x2
  UnityEngine_Component_o *v42; // x8
  System_Action_o *v43; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x26
  System_Action_o *v46; // x24
  System_Action_o *v47; // x24
  System_Action_o *v48; // x24
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0
  __int64 v56; // [xsp+0h] [xbp-60h]

  if ( (byte_42B0DA9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__);
    sub_B52984(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__);
    sub_B52984(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__);
    sub_B52984(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
    byte_42B0DA9 = 1;
  }
  if ( type == 1 )
  {
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_47;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
        {
          v55 = sub_B52A88(v7);
          sub_B52A28(v55, 0LL);
        }
        v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)assistCompnentList->m_Items[v11];
        if ( !v8 )
          break;
        monitor = (int *)v8[1].monitor;
        if ( !monitor )
          break;
        if ( monitor[6] <= 0 && monitor[5] >= 1 )
        {
          if ( !v6 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            v8,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__);
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_15;
      }
LABEL_47:
      sub_B52A5C(v7, v8);
    }
LABEL_15:
    if ( !v6 )
      goto LABEL_47;
    size = v6->fields._size;
    if ( (int)size > 0 )
    {
      v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0LL);
      v15 = 0LL;
      v56 = (unsigned int)(size - 1);
      while ( 1 )
      {
        v16 = sub_B52A54(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0___ctor(
          (EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *)v16,
          0LL);
        if ( v15 >= (unsigned int)v6->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !v16 )
          goto LABEL_47;
        v23 = (System_Int32_array **)v6->fields._items->m_Items[v15];
        *(_QWORD *)(v16 + 24) = v23;
        v24 = (UnityEngine_Component_o **)(v16 + 24);
        sub_B52920((BattleServantConfConponent_o *)(v16 + 24), v23, v17, v18, v19, v20, v21, v22);
        if ( v56 == v15 )
          v31 = (System_Int32_array **)v14;
        else
          v31 = 0LL;
        *(_QWORD *)(v16 + 16) = v31;
        if ( v56 == v15 )
          v32 = (System_Int32_array **)callback;
        else
          v32 = 0LL;
        sub_B52920((BattleServantConfConponent_o *)(v16 + 16), v31, v25, v26, v27, v28, v29, v30);
        *(_QWORD *)(v16 + 32) = v32;
        v33 = (System_Action_o **)(v16 + 32);
        sub_B52920((BattleServantConfConponent_o *)(v16 + 32), v32, v34, v35, v36, v37, v38, v39);
        v40 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v7 = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
        v42 = *v24;
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          if ( !v42 )
            goto LABEL_47;
          v43 = *v33;
          v7 = *v24;
        }
        else
        {
          if ( !v42 )
            goto LABEL_47;
          gameObject = UnityEngine_Component__get_gameObject(*v24, 0LL);
          GameObjectExtensions__SafeSetParent_32091088((UnityEngine_GameObject_o *)v40, gameObject, 0LL);
          if ( !v40 )
            goto LABEL_47;
          Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v40,
                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
          {
            v46 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              v46,
              (Il2CppObject *)v16,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0LL);
            if ( !Component_srcLineSprite )
              goto LABEL_47;
            CommonEffectActionComponent__SetEventAction(
              (CommonEffectActionComponent_o *)Component_srcLineSprite,
              0,
              v46,
              0LL);
            v47 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              v47,
              (Il2CppObject *)v16,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0LL);
            CommonEffectActionComponent__SetEventAction(
              (CommonEffectActionComponent_o *)Component_srcLineSprite,
              1,
              v47,
              0LL);
            v48 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              v48,
              (Il2CppObject *)v16,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0LL);
            *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v48;
            sub_B52920(
              (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
              (System_Int32_array **)v48,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54);
            goto LABEL_44;
          }
          v7 = *v24;
          if ( !*v24 )
            goto LABEL_47;
          v43 = *v33;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp((EventInfoCommandAssistLevelComponent_o *)v7, v43, v41);
LABEL_44:
        if ( (__int64)++v15 >= size )
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
  int max_length; // w9
  EventInfoCommandAssistLevelComponent_o *v6; // x20
  int32_t *assistData; // x22
  struct EventUiEntity_o *eventUiEntity; // x8
  EventCommandAssistEntity_o *CurrentEntity; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  int32_t imageId; // w8
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v13; // x8
  __int64 v14; // x0

  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
LABEL_16:
    sub_B52A5C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = assistCompnentList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v14 = sub_B52A88(this);
      sub_B52A28(v14, 0LL);
    }
    v6 = assistCompnentList->m_Items[v4];
    if ( !v6 )
      goto LABEL_16;
    assistData = (int32_t *)v6->fields.assistData;
    if ( assistData )
    {
      eventUiEntity = v3->fields.eventUiEntity;
      if ( !eventUiEntity )
        goto LABEL_16;
      this = (EventInfoCommandAssistLevelControl_o *)v3->fields.eventCommandAssistMst;
      if ( !this )
        goto LABEL_16;
      CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                        (EventCommandAssistMaster_o *)this,
                        eventUiEntity->fields.eventId,
                        assistData[4],
                        -1,
                        0,
                        0LL);
      if ( CurrentEntity )
      {
        assistData[5] = CurrentEntity->fields.lv;
        imageId = CurrentEntity->fields.imageId;
      }
      else
      {
        imageId = 0;
        assistData[5] = 0;
      }
      assistData[7] = imageId;
      v13 = v6->fields.assistData;
      if ( v13 )
        EventInfoCommandAssistLevelComponent__SetupIcon(v6, v13->fields.lv, v11);
      EventInfoCommandAssistLevelComponent__UpdateDispLevel(v6, v10);
      assistCompnentList = v3->fields.assistCompnentList;
    }
    ++v4;
    if ( !assistCompnentList )
      goto LABEL_16;
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
  EventInfoCommandAssistLevelComponent_o *titleSprite; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventInfoCommandAssistLevelComponent_o *v9; // x20
  __int64 v10; // x26
  struct UILabel_o **p_levelLabel; // x27
  EventInfoCommandAssistLevelComponent_AssistData_o *v12; // x22
  int32_t v13; // w23
  struct EventUiEntity_o *v14; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x24
  int32_t eventId; // w25
  int32_t v17; // w8
  struct EventUiEntity_o *v18; // x8
  const MethodInfo *v19; // x3
  int32_t assistData; // w8
  struct EventInfoCommandAssistLevelComponent_array *v21; // x8
  __int64 v22; // x0

  if ( (byte_42B0DA8 & 1) == 0 )
  {
    sub_B52984(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B0DA8 = 1;
  }
  if ( entitys )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.titleSprite,
      this->fields.titleSpriteName,
      0LL);
    titleSprite = (EventInfoCommandAssistLevelComponent_o *)this->fields.titleSprite;
    if ( !titleSprite )
      goto LABEL_38;
    ((void (__fastcall *)(EventInfoCommandAssistLevelComponent_o *, void *))titleSprite->klass[2]._1.typeMetadataHandle)(
      titleSprite,
      titleSprite->klass[2]._1.interopData);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.bgSprite,
      this->fields.bgSpriteName,
      0LL);
    titleSprite = (EventInfoCommandAssistLevelComponent_o *)this->fields.bgSprite;
    if ( !titleSprite )
      goto LABEL_38;
    ((void (__fastcall *)(EventInfoCommandAssistLevelComponent_o *, void *))titleSprite->klass[2]._1.typeMetadataHandle)(
      titleSprite,
      titleSprite->klass[2]._1.interopData);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.detailDialogButtonSprite,
      this->fields.buttonSpriteName,
      0LL);
    titleSprite = (EventInfoCommandAssistLevelComponent_o *)this->fields.detailDialogButtonSprite;
    if ( !titleSprite
      || (titleSprite = (EventInfoCommandAssistLevelComponent_o *)((__int64 (__fastcall *)(EventInfoCommandAssistLevelComponent_o *, void *))titleSprite->klass[2]._1.typeMetadataHandle)(
                                                                    titleSprite,
                                                                    titleSprite->klass[2]._1.interopData),
          (eventUiEntity = this->fields.eventUiEntity) == 0LL)
      || (titleSprite = (EventInfoCommandAssistLevelComponent_o *)this->fields.eventCommandAssistMst) == 0LL
      || (titleSprite = (EventInfoCommandAssistLevelComponent_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                    (EventCommandAssistMaster_o *)titleSprite,
                                                                    eventUiEntity->fields.eventId,
                                                                    0LL),
          (assistCompnentList = this->fields.assistCompnentList) == 0LL) )
    {
LABEL_38:
      sub_B52A5C(titleSprite, v5);
    }
    v9 = titleSprite;
    v10 = 0LL;
    p_levelLabel = &titleSprite->fields.levelLabel;
    while ( (int)v10 < (signed int)assistCompnentList->max_length )
    {
      if ( !v9 )
        goto LABEL_38;
      if ( (int)v10 >= SLODWORD(v9->fields.skillIconSprite) )
        break;
      v12 = (EventInfoCommandAssistLevelComponent_AssistData_o *)sub_B52A54(EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
      EventInfoCommandAssistLevelComponent_AssistData___ctor(v12, 0LL);
      if ( (unsigned int)v10 >= LODWORD(v9->fields.skillIconSprite) )
        goto LABEL_40;
      if ( v12 )
      {
        v13 = *((_DWORD *)p_levelLabel + v10);
        v12->fields.assistId = v13;
        v14 = this->fields.eventUiEntity;
        if ( v14 )
        {
          eventCommandAssistMst = this->fields.eventCommandAssistMst;
          eventId = v14->fields.eventId;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42B0E6B )
          {
            sub_B52984(&TerminalPramsManager_TypeInfo);
            byte_42B0E6B = 1;
          }
          titleSprite = (EventInfoCommandAssistLevelComponent_o *)TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            titleSprite = (EventInfoCommandAssistLevelComponent_o *)TerminalPramsManager_TypeInfo;
          }
          if ( eventCommandAssistMst )
          {
            titleSprite = (EventInfoCommandAssistLevelComponent_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                      eventCommandAssistMst,
                                                                      eventId,
                                                                      v13,
                                                                      *(_DWORD *)(*(_QWORD *)&titleSprite[3].fields.m_CachedPtr
                                                                                + 536LL),
                                                                      0,
                                                                      0LL);
            v17 = titleSprite ? LODWORD(titleSprite->fields.commandAssistLevelControl) : 0;
            v12->fields.oldLv = v17;
            v18 = this->fields.eventUiEntity;
            if ( v18 )
            {
              titleSprite = (EventInfoCommandAssistLevelComponent_o *)this->fields.eventCommandAssistMst;
              if ( titleSprite )
              {
                titleSprite = (EventInfoCommandAssistLevelComponent_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                          (EventCommandAssistMaster_o *)titleSprite,
                                                                          v18->fields.eventId,
                                                                          v12->fields.assistId,
                                                                          -1,
                                                                          0,
                                                                          0LL);
                if ( titleSprite )
                {
                  v12->fields.lv = (int32_t)titleSprite->fields.commandAssistLevelControl;
                  assistData = (int32_t)titleSprite->fields.assistData;
                }
                else
                {
                  assistData = 0;
                  v12->fields.lv = 0;
                }
                v12->fields.imageId = assistData;
                v21 = this->fields.assistCompnentList;
                if ( v21 )
                {
                  if ( (unsigned int)v10 >= v21->max_length )
                  {
LABEL_40:
                    v22 = sub_B52A88(titleSprite);
                    sub_B52A28(v22, 0LL);
                  }
                  titleSprite = v21->m_Items[v10];
                  if ( titleSprite )
                  {
                    EventInfoCommandAssistLevelComponent__Setup(titleSprite, this, v12, v19);
                    assistCompnentList = this->fields.assistCompnentList;
                    ++v10;
                    if ( assistCompnentList )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_38;
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
    sub_B52A5C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_42B0DAB & 1) == 0 )
  {
    sub_B52984(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    byte_42B0DAB = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0LL) )
  {
    v3 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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
  EventInfoCommandAssistLevelComponent_o *assistComponent; // x0

  assistComponent = this->fields.assistComponent;
  if ( !assistComponent )
    sub_B52A5C(0LL, method);
  EventInfoCommandAssistLevelComponent__UpdateDispIcon(assistComponent, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__3(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  EventInfoCommandAssistLevelComponent_o *assistComponent; // x0

  if ( (byte_42AD8EC & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD8EC = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD191 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD191 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  assistComponent = this->fields.assistComponent;
  if ( !assistComponent )
    sub_B52A5C(0LL, method);
  EventInfoCommandAssistLevelComponent__UpdateDispLevel(assistComponent, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}