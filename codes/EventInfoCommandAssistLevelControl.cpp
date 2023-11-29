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
  struct EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x21

  if ( (byte_40FA0E7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__, v7);
    byte_40FA0E7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = Master_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventCommandAssistMst,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.eventUiEntity = entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  eventUiEntity = this->fields.eventUiEntity;
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v26, 0LL);
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
  WebViewManager_o *Instance; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v10; // x19
  int32_t eventId; // w20
  Il2CppObject *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x21

  if ( (byte_40FA0EA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v3);
    sub_B16FFC(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FA0EA = 1;
  }
  v6 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B17004(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v10 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v12 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16),
          System_Action___ctor(v17, v12, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v10) )
    {
      sub_B170D4();
    }
    CommonUI__OpenCommandAssistConfirmDialog(v10, eventId, v17, 0LL);
  }
}


void __fastcall EventInfoCommandAssistLevelControl__OnDestroy(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B170D4();
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
  __int64 v4; // x4
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
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  __int64 v20; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x19
  int max_length; // w8
  unsigned int v27; // w22
  int *monitor; // x8
  signed __int64 size; // x27
  System_Action_o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  unsigned __int64 v35; // x28
  __int64 v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  UnityEngine_Component_o **v44; // x24
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_Int32_array **v52; // x26
  System_Action_o **v53; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_Object_o *v60; // x26
  bool v61; // w0
  const MethodInfo *v62; // x2
  UnityEngine_Component_o *v63; // x8
  System_Action_o *v64; // x1
  UnityEngine_Component_o *v65; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x26
  __int64 v68; // x1
  __int64 v69; // x3
  __int64 v70; // x4
  System_Action_o *v71; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Action_o *v76; // x24
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  System_Action_o *v81; // x24
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // [xsp+0h] [xbp-60h]

  if ( (byte_40FA0E9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__, v15);
    sub_B16FFC(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__, v16);
    sub_B16FFC(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__, v17);
    sub_B16FFC(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v18);
    byte_40FA0E9 = 1;
  }
  if ( type == 1 )
  {
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo,
                                                                                                    *(_QWORD *)&type,
                                                                                                    callback,
                                                                                                    method,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_47;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
        {
          sub_B17100(v20, v21, v22);
          sub_B170A0();
        }
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)assistCompnentList->m_Items[v27];
        if ( !v21 )
          break;
        monitor = (int *)v21[1].monitor;
        if ( !monitor )
          break;
        if ( monitor[6] <= 0 && monitor[5] >= 1 )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            v21,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__);
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_15;
      }
LABEL_47:
      sub_B170D4();
    }
LABEL_15:
    if ( !v19 )
      goto LABEL_47;
    size = v19->fields._size;
    if ( (int)size > 0 )
    {
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
      System_Action___ctor(
        v30,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0LL);
      v35 = 0LL;
      v88 = (unsigned int)(size - 1);
      while ( 1 )
      {
        v36 = sub_B170CC(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v31, v32, v33, v34);
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0___ctor(
          (EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *)v36,
          0LL);
        if ( v35 >= (unsigned int)v19->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v36 )
          goto LABEL_47;
        v43 = (System_Int32_array **)v19->fields._items->m_Items[v35];
        *(_QWORD *)(v36 + 24) = v43;
        v44 = (UnityEngine_Component_o **)(v36 + 24);
        sub_B16F98((BattleServantConfConponent_o *)(v36 + 24), v43, v37, v38, v39, v40, v41, v42);
        if ( v88 == v35 )
          v51 = (System_Int32_array **)v30;
        else
          v51 = 0LL;
        *(_QWORD *)(v36 + 16) = v51;
        if ( v88 == v35 )
          v52 = (System_Int32_array **)callback;
        else
          v52 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)(v36 + 16), v51, v45, v46, v47, v48, v49, v50);
        *(_QWORD *)(v36 + 32) = v52;
        v53 = (System_Action_o **)(v36 + 32);
        sub_B16F98((BattleServantConfConponent_o *)(v36 + 32), v52, v54, v55, v56, v57, v58, v59);
        v60 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v61 = UnityEngine_Object__op_Equality(v60, 0LL, 0LL);
        v63 = *v44;
        if ( v61 )
        {
          if ( !v63 )
            goto LABEL_47;
          v64 = *v53;
          v65 = *v44;
        }
        else
        {
          if ( !v63 )
            goto LABEL_47;
          gameObject = UnityEngine_Component__get_gameObject(*v44, 0LL);
          GameObjectExtensions__SafeSetParent_27425996((UnityEngine_GameObject_o *)v60, gameObject, 0LL);
          if ( !v60 )
            goto LABEL_47;
          Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v60,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
          {
            v71 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v68, v62, v69, v70);
            System_Action___ctor(
              v71,
              (Il2CppObject *)v36,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0LL);
            if ( !Component_srcLineSprite )
              goto LABEL_47;
            CommonEffectActionComponent__SetEventAction(
              (CommonEffectActionComponent_o *)Component_srcLineSprite,
              0,
              v71,
              0LL);
            v76 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
            System_Action___ctor(
              v76,
              (Il2CppObject *)v36,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0LL);
            CommonEffectActionComponent__SetEventAction(
              (CommonEffectActionComponent_o *)Component_srcLineSprite,
              1,
              v76,
              0LL);
            v81 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v77, v78, v79, v80);
            System_Action___ctor(
              v81,
              (Il2CppObject *)v36,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0LL);
            *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v81;
            sub_B16F98(
              (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
              (System_Int32_array **)v81,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87);
            goto LABEL_44;
          }
          v65 = *v44;
          if ( !*v44 )
            goto LABEL_47;
          v64 = *v53;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp((EventInfoCommandAssistLevelComponent_o *)v65, v64, v62);
LABEL_44:
        if ( (__int64)++v35 >= size )
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
  __int64 v2; // x2
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  __int64 v5; // x21
  int max_length; // w9
  EventInfoCommandAssistLevelComponent_o *v7; // x20
  int32_t *assistData; // x22
  struct EventUiEntity_o *eventUiEntity; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x0
  EventCommandAssistEntity_o *CurrentEntity; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  int32_t imageId; // w8
  struct EventInfoCommandAssistLevelComponent_AssistData_o *v15; // x8

  assistCompnentList = this->fields.assistCompnentList;
  if ( !assistCompnentList )
LABEL_16:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = assistCompnentList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = assistCompnentList->m_Items[v5];
    if ( !v7 )
      goto LABEL_16;
    assistData = (int32_t *)v7->fields.assistData;
    if ( assistData )
    {
      eventUiEntity = this->fields.eventUiEntity;
      if ( !eventUiEntity )
        goto LABEL_16;
      eventCommandAssistMst = this->fields.eventCommandAssistMst;
      if ( !eventCommandAssistMst )
        goto LABEL_16;
      CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                        eventCommandAssistMst,
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
      v15 = v7->fields.assistData;
      if ( v15 )
        EventInfoCommandAssistLevelComponent__SetupIcon(v7, v15->fields.lv, v13);
      EventInfoCommandAssistLevelComponent__UpdateDispLevel(v7, v12);
      assistCompnentList = this->fields.assistCompnentList;
    }
    ++v5;
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
  struct UISprite_o *titleSprite; // x0
  struct UISprite_o *bgSprite; // x0
  struct UISprite_o *detailDialogButtonSprite; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x0
  System_Int32_array *UniqueIdList; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  System_Int32_array *v17; // x20
  __int64 v18; // x26
  int32_t *v19; // x27
  EventInfoCommandAssistLevelComponent_AssistData_o *v20; // x22
  EventCommandAssistEntity_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w23
  struct EventUiEntity_o *v25; // x8
  EventCommandAssistMaster_o *v26; // x24
  int32_t eventId; // w25
  TerminalPramsManager_c *v28; // x0
  EventCommandAssistEntity_o *CurrentEntity; // x0
  int32_t v30; // w8
  struct EventUiEntity_o *v31; // x8
  EventCommandAssistMaster_o *v32; // x0
  const MethodInfo *v33; // x3
  int32_t imageId; // w8
  struct EventInfoCommandAssistLevelComponent_array *v35; // x8
  EventInfoCommandAssistLevelComponent_o *v36; // x0

  if ( (byte_40FA0E8 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo, entitys);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40FA0E8 = 1;
  }
  if ( entitys )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.titleSprite,
      this->fields.titleSpriteName,
      0LL);
    titleSprite = this->fields.titleSprite;
    if ( !titleSprite )
      goto LABEL_38;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))titleSprite->klass->vtable._33_MakePixelPerfect.method)(
      titleSprite,
      titleSprite->klass->vtable._34_get_minWidth.methodPtr);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.bgSprite,
      this->fields.bgSpriteName,
      0LL);
    bgSprite = this->fields.bgSprite;
    if ( !bgSprite )
      goto LABEL_38;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))bgSprite->klass->vtable._33_MakePixelPerfect.method)(
      bgSprite,
      bgSprite->klass->vtable._34_get_minWidth.methodPtr);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.detailDialogButtonSprite,
      this->fields.buttonSpriteName,
      0LL);
    detailDialogButtonSprite = this->fields.detailDialogButtonSprite;
    if ( !detailDialogButtonSprite
      || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))detailDialogButtonSprite->klass->vtable._33_MakePixelPerfect.method)(
            detailDialogButtonSprite,
            detailDialogButtonSprite->klass->vtable._34_get_minWidth.methodPtr),
          (eventUiEntity = this->fields.eventUiEntity) == 0LL)
      || (eventCommandAssistMst = this->fields.eventCommandAssistMst) == 0LL
      || (UniqueIdList = EventCommandAssistMaster__GetUniqueIdList(
                           eventCommandAssistMst,
                           eventUiEntity->fields.eventId,
                           0LL),
          (assistCompnentList = this->fields.assistCompnentList) == 0LL) )
    {
LABEL_38:
      sub_B170D4();
    }
    v17 = UniqueIdList;
    v18 = 0LL;
    v19 = &UniqueIdList->m_Items[1];
    while ( (int)v18 < (signed int)assistCompnentList->max_length )
    {
      if ( !v17 )
        goto LABEL_38;
      if ( (int)v18 >= (signed int)v17->max_length )
        break;
      v20 = (EventInfoCommandAssistLevelComponent_AssistData_o *)sub_B170CC(
                                                                   EventInfoCommandAssistLevelComponent_AssistData_TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14,
                                                                   v15);
      EventInfoCommandAssistLevelComponent_AssistData___ctor(v20, 0LL);
      if ( (unsigned int)v18 >= v17->max_length )
        goto LABEL_40;
      if ( v20 )
      {
        v24 = v19[v18];
        v20->fields.assistId = v24;
        v25 = this->fields.eventUiEntity;
        if ( v25 )
        {
          v26 = this->fields.eventCommandAssistMst;
          eventId = v25->fields.eventId;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40FA1B7 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
            byte_40FA1B7 = 1;
          }
          v28 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v28 = TerminalPramsManager_TypeInfo;
          }
          if ( v26 )
          {
            CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                              v26,
                              eventId,
                              v24,
                              v28->static_fields->_EventUIEffectClearQuestId_k__BackingField,
                              0,
                              0LL);
            v30 = CurrentEntity ? CurrentEntity->fields.lv : 0;
            v20->fields.oldLv = v30;
            v31 = this->fields.eventUiEntity;
            if ( v31 )
            {
              v32 = this->fields.eventCommandAssistMst;
              if ( v32 )
              {
                v21 = EventCommandAssistMaster__GetCurrentEntity(
                        v32,
                        v31->fields.eventId,
                        v20->fields.assistId,
                        -1,
                        0,
                        0LL);
                if ( v21 )
                {
                  v20->fields.lv = v21->fields.lv;
                  imageId = v21->fields.imageId;
                }
                else
                {
                  imageId = 0;
                  v20->fields.lv = 0;
                }
                v20->fields.imageId = imageId;
                v35 = this->fields.assistCompnentList;
                if ( v35 )
                {
                  if ( (unsigned int)v18 >= v35->max_length )
                  {
LABEL_40:
                    sub_B17100(v21, v22, v23);
                    sub_B170A0();
                  }
                  v36 = v35->m_Items[v18];
                  if ( v36 )
                  {
                    EventInfoCommandAssistLevelComponent__Setup(v36, this, v20, v33);
                    assistCompnentList = this->fields.assistCompnentList;
                    ++v18;
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
    sub_B170D4();
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_40FA0EB & 1) == 0 )
  {
    sub_B16FFC(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, method);
    byte_40FA0EB = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0LL) )
  {
    v3 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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
    sub_B170D4();
  EventInfoCommandAssistLevelComponent__UpdateDispIcon(assistComponent, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__3(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  EventInfoCommandAssistLevelComponent_o *assistComponent; // x0

  if ( (byte_40F6FC4 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6FC4 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E2C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6E2C = 1;
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
    sub_B170D4();
  EventInfoCommandAssistLevelComponent__UpdateDispLevel(assistComponent, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}