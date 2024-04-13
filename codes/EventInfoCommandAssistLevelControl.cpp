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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v29; // x21

  if ( (byte_42E9498 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__, v12, v13, v14);
    byte_42E9498 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = Master_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventCommandAssistMst,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.eventUiEntity = entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  eventUiEntity = this->fields.eventUiEntity;
  v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)this,
    Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v29, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__OnClickDetailDialogButton(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v19; // x19
  int32_t eventId; // w20
  Il2CppObject *v21; // x22
  System_Action_o *v22; // x21

  if ( (byte_42E949B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E949B = 1;
  }
  v14 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 75) & 2) != 0 )
    v14 = (_QWORD *)sub_B5D5CC(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v15 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v14, v14[3]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v19 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v21 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(v22, v21, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v19) )
    {
      sub_B5D69C(Instance, v17);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v19, eventId, v22, 0LL);
  }
}


void __fastcall EventInfoCommandAssistLevelControl__OnDestroy(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B5D69C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl__PlayAnim(
        EventInfoCommandAssistLevelControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x21
  UnityEngine_Component_o *v43; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x1
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x19
  int max_length; // w8
  unsigned int v47; // w22
  int *monitor; // x8
  signed __int64 size; // x27
  System_Action_o *v50; // x22
  unsigned __int64 v51; // x28
  __int64 v52; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  UnityEngine_Component_o **v60; // x24
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_Int32_array **v68; // x26
  System_Action_o **v69; // x25
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UnityEngine_Object_o *v76; // x26
  const MethodInfo *v77; // x2
  UnityEngine_Component_o *v78; // x8
  System_Action_o *v79; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x26
  System_Action_o *v82; // x24
  System_Action_o *v83; // x24
  System_Action_o *v84; // x24
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x0
  __int64 v92; // [xsp+0h] [xbp-60h]

  if ( (byte_42E949A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, type, (_DWORD)callback, method);
    sub_B5D5C4(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__, v30, v31, v32);
    sub_B5D5C4(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__, v33, v34, v35);
    sub_B5D5C4(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__, v36, v37, v38);
    sub_B5D5C4(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v39, v40, v41);
    byte_42E949A = 1;
  }
  if ( type == 1 )
  {
    v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v42,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_47;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( v47 >= max_length )
        {
          v91 = sub_B5D6C8(v43);
          sub_B5D668(v91, 0LL);
        }
        v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)assistCompnentList->m_Items[v47];
        if ( !v44 )
          break;
        monitor = (int *)v44[1].monitor;
        if ( !monitor )
          break;
        if ( monitor[6] <= 0 && monitor[5] >= 1 )
        {
          if ( !v42 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v42,
            v44,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__);
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v47 >= max_length )
          goto LABEL_15;
      }
LABEL_47:
      sub_B5D69C(v43, v44);
    }
LABEL_15:
    if ( !v42 )
      goto LABEL_47;
    size = v42->fields._size;
    if ( (int)size > 0 )
    {
      v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v50,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0LL);
      v51 = 0LL;
      v92 = (unsigned int)(size - 1);
      while ( 1 )
      {
        v52 = sub_B5D694(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo);
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0___ctor(
          (EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *)v52,
          0LL);
        if ( v51 >= (unsigned int)v42->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v52 )
          goto LABEL_47;
        v59 = (System_Int32_array **)v42->fields._items->m_Items[v51];
        *(_QWORD *)(v52 + 24) = v59;
        v60 = (UnityEngine_Component_o **)(v52 + 24);
        sub_B5D560((BattleServantConfConponent_o *)(v52 + 24), v59, v53, v54, v55, v56, v57, v58);
        if ( v92 == v51 )
          v67 = (System_Int32_array **)v50;
        else
          v67 = 0LL;
        *(_QWORD *)(v52 + 16) = v67;
        if ( v92 == v51 )
          v68 = (System_Int32_array **)callback;
        else
          v68 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)(v52 + 16), v67, v61, v62, v63, v64, v65, v66);
        *(_QWORD *)(v52 + 32) = v68;
        v69 = (System_Action_o **)(v52 + 32);
        sub_B5D560((BattleServantConfConponent_o *)(v52 + 32), v68, v70, v71, v72, v73, v74, v75);
        v76 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v43 = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v76, 0LL, 0LL);
        v78 = *v60;
        if ( ((unsigned __int8)v43 & 1) != 0 )
        {
          if ( !v78 )
            goto LABEL_47;
          v79 = *v69;
          v43 = *v60;
        }
        else
        {
          if ( !v78 )
            goto LABEL_47;
          gameObject = UnityEngine_Component__get_gameObject(*v60, 0LL);
          GameObjectExtensions__SafeSetParent_32436524((UnityEngine_GameObject_o *)v76, gameObject, 0LL);
          if ( !v76 )
            goto LABEL_47;
          Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v76,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
          {
            v82 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v82,
              (Il2CppObject *)v52,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0LL);
            if ( !Component_srcLineSprite )
              goto LABEL_47;
            CommonEffectActionComponent__SetEventAction(
              (CommonEffectActionComponent_o *)Component_srcLineSprite,
              0,
              v82,
              0LL);
            v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v83,
              (Il2CppObject *)v52,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0LL);
            CommonEffectActionComponent__SetEventAction(
              (CommonEffectActionComponent_o *)Component_srcLineSprite,
              1,
              v83,
              0LL);
            v84 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v84,
              (Il2CppObject *)v52,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0LL);
            *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v84;
            sub_B5D560(
              (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
              (System_Int32_array **)v84,
              v85,
              v86,
              v87,
              v88,
              v89,
              v90);
            goto LABEL_44;
          }
          v43 = *v60;
          if ( !*v60 )
            goto LABEL_47;
          v79 = *v69;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp((EventInfoCommandAssistLevelComponent_o *)v43, v79, v77);
LABEL_44:
        if ( (__int64)++v51 >= size )
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
    sub_B5D69C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = assistCompnentList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v14 = sub_B5D6C8(this);
      sub_B5D668(v14, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  EventInfoCommandAssistLevelComponent_o *titleSprite; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventInfoCommandAssistLevelComponent_o *v13; // x20
  __int64 v14; // x26
  struct UILabel_o **p_levelLabel; // x27
  EventInfoCommandAssistLevelComponent_AssistData_o *v16; // x22
  int v17; // w2
  __int64 v18; // x3
  int32_t v19; // w23
  struct EventUiEntity_o *v20; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x24
  int32_t eventId; // w25
  int32_t v23; // w8
  struct EventUiEntity_o *v24; // x8
  const MethodInfo *v25; // x3
  int32_t assistData; // w8
  struct EventInfoCommandAssistLevelComponent_array *v27; // x8
  __int64 v28; // x0

  if ( (byte_42E9499 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo, (_DWORD)entitys, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
    byte_42E9499 = 1;
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
      sub_B5D69C(titleSprite, v9);
    }
    v13 = titleSprite;
    v14 = 0LL;
    p_levelLabel = &titleSprite->fields.levelLabel;
    while ( (int)v14 < (signed int)assistCompnentList->max_length )
    {
      if ( !v13 )
        goto LABEL_38;
      if ( (int)v14 >= SLODWORD(v13->fields.skillIconSprite) )
        break;
      v16 = (EventInfoCommandAssistLevelComponent_AssistData_o *)sub_B5D694(EventInfoCommandAssistLevelComponent_AssistData_TypeInfo);
      EventInfoCommandAssistLevelComponent_AssistData___ctor(v16, 0LL);
      if ( (unsigned int)v14 >= LODWORD(v13->fields.skillIconSprite) )
        goto LABEL_40;
      if ( v16 )
      {
        v19 = *((_DWORD *)p_levelLabel + v14);
        v16->fields.assistId = v19;
        v20 = this->fields.eventUiEntity;
        if ( v20 )
        {
          eventCommandAssistMst = this->fields.eventCommandAssistMst;
          eventId = v20->fields.eventId;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42E955C )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v9, v17, v18);
            byte_42E955C = 1;
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
                                                                      v19,
                                                                      *(_DWORD *)(*(_QWORD *)&titleSprite[3].fields.m_CachedPtr
                                                                                + 536LL),
                                                                      0,
                                                                      0LL);
            v23 = titleSprite ? LODWORD(titleSprite->fields.commandAssistLevelControl) : 0;
            v16->fields.oldLv = v23;
            v24 = this->fields.eventUiEntity;
            if ( v24 )
            {
              titleSprite = (EventInfoCommandAssistLevelComponent_o *)this->fields.eventCommandAssistMst;
              if ( titleSprite )
              {
                titleSprite = (EventInfoCommandAssistLevelComponent_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                          (EventCommandAssistMaster_o *)titleSprite,
                                                                          v24->fields.eventId,
                                                                          v16->fields.assistId,
                                                                          -1,
                                                                          0,
                                                                          0LL);
                if ( titleSprite )
                {
                  v16->fields.lv = (int32_t)titleSprite->fields.commandAssistLevelControl;
                  assistData = (int32_t)titleSprite->fields.assistData;
                }
                else
                {
                  assistData = 0;
                  v16->fields.lv = 0;
                }
                v16->fields.imageId = assistData;
                v27 = this->fields.assistCompnentList;
                if ( v27 )
                {
                  if ( (unsigned int)v14 >= v27->max_length )
                  {
LABEL_40:
                    v28 = sub_B5D6C8(titleSprite);
                    sub_B5D668(v28, 0LL);
                  }
                  titleSprite = v27->m_Items[v14];
                  if ( titleSprite )
                  {
                    EventInfoCommandAssistLevelComponent__Setup(titleSprite, this, v16, v25);
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
    sub_B5D69C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_42E949C & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, (_DWORD)method, v2, v3);
    byte_42E949C = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0LL) )
  {
    v5 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySe(v6, this->fields.seName, 0LL);
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
    sub_B5D69C(0LL, method);
  EventInfoCommandAssistLevelComponent__UpdateDispIcon(assistComponent, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__3(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  EventInfoCommandAssistLevelComponent_o *assistComponent; // x0

  if ( (byte_42E652A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E652A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CCA )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CCA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  assistComponent = this->fields.assistComponent;
  if ( !assistComponent )
    sub_B5D69C(0LL, method);
  EventInfoCommandAssistLevelComponent__UpdateDispLevel(assistComponent, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}