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
  System_Action_o *v24; // x21

  if ( (byte_421557C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, entity);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__, v7);
    byte_421557C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  this->fields.eventCommandAssistMst = Master_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventCommandAssistMst,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.eventUiEntity = entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  eventUiEntity = this->fields.eventUiEntity;
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_EventInfoCommandAssistLevelControl__Initialization_b__13_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v24, 0LL);
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
  System_Action_o *v15; // x21

  if ( (byte_421557F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v3);
    sub_B0D8A4(&Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_421557F = 1;
  }
  v6 = Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__;
  if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B0D8AC(Method_EventInfoCommandAssistLevelControl_OnClickDetailDialogButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_B0D888(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  if ( this->fields.eventUiEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity
      || (v10 = (CommonUI_o *)Instance,
          eventId = eventUiEntity->fields.eventId,
          v12 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14),
          System_Action___ctor(v15, v12, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v10) )
    {
      sub_B0D97C(Instance);
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
    sub_B0D97C(this);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  UnityEngine_Component_o *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x1
  __int64 v21; // x2
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x19
  int max_length; // w8
  unsigned int v24; // w22
  int *monitor; // x8
  signed __int64 size; // x27
  System_Action_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x28
  __int64 v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  UnityEngine_Component_o **v39; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_Int32_array **v47; // x26
  System_Action_o **v48; // x25
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_Object_o *v55; // x26
  const MethodInfo *v56; // x2
  UnityEngine_Component_o *v57; // x8
  System_Action_o *v58; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x26
  __int64 v61; // x1
  System_Action_o *v62; // x24
  __int64 v63; // x1
  __int64 v64; // x2
  System_Action_o *v65; // x24
  __int64 v66; // x1
  __int64 v67; // x2
  System_Action_o *v68; // x24
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x0
  __int64 v76; // [xsp+0h] [xbp-60h]

  if ( (byte_421557E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__, v14);
    sub_B0D8A4(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__, v15);
    sub_B0D8A4(&Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__, v16);
    sub_B0D8A4(&EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v17);
    byte_421557E = 1;
  }
  if ( type == 1 )
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__TypeInfo,
                                                                                                    *(_QWORD *)&type,
                                                                                                    callback);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent___ctor__);
    assistCompnentList = this->fields.assistCompnentList;
    if ( !assistCompnentList )
      goto LABEL_47;
    max_length = assistCompnentList->max_length;
    if ( max_length >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        if ( v24 >= max_length )
        {
          v75 = sub_B0D9A8(v19);
          sub_B0D948(v75, 0LL);
        }
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)assistCompnentList->m_Items[v24];
        if ( !v20 )
          break;
        monitor = (int *)v20[1].monitor;
        if ( !monitor )
          break;
        if ( monitor[6] <= 0 && monitor[5] >= 1 )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            v20,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoCommandAssistLevelComponent__Add__);
        }
        max_length = assistCompnentList->max_length;
        if ( (int)++v24 >= max_length )
          goto LABEL_15;
      }
LABEL_47:
      sub_B0D97C(v19);
    }
LABEL_15:
    if ( !v18 )
      goto LABEL_47;
    size = v18->fields._size;
    if ( (int)size > 0 )
    {
      v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21);
      System_Action___ctor(
        v27,
        (Il2CppObject *)this,
        (intptr_t)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__,
        0LL);
      v30 = 0LL;
      v76 = (unsigned int)(size - 1);
      while ( 1 )
      {
        v31 = sub_B0D974(EventInfoCommandAssistLevelControl___c__DisplayClass16_0_TypeInfo, v28, v29);
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0___ctor(
          (EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *)v31,
          0LL);
        if ( v30 >= (unsigned int)v18->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v31 )
          goto LABEL_47;
        v38 = (System_Int32_array **)v18->fields._items->m_Items[v30];
        *(_QWORD *)(v31 + 24) = v38;
        v39 = (UnityEngine_Component_o **)(v31 + 24);
        sub_B0D840((BattleServantConfConponent_o *)(v31 + 24), v38, v32, v33, v34, v35, v36, v37);
        if ( v76 == v30 )
          v46 = (System_Int32_array **)v27;
        else
          v46 = 0LL;
        *(_QWORD *)(v31 + 16) = v46;
        if ( v76 == v30 )
          v47 = (System_Int32_array **)callback;
        else
          v47 = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)(v31 + 16), v46, v40, v41, v42, v43, v44, v45);
        *(_QWORD *)(v31 + 32) = v47;
        v48 = (System_Action_o **)(v31 + 32);
        sub_B0D840((BattleServantConfConponent_o *)(v31 + 32), v47, v49, v50, v51, v52, v53, v54);
        v55 = (UnityEngine_Object_o *)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                        (EventInfoUIBase_o *)this,
                                        this->fields.effectPrefabName,
                                        0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v19 = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v55, 0LL, 0LL);
        v57 = *v39;
        if ( ((unsigned __int8)v19 & 1) != 0 )
        {
          if ( !v57 )
            goto LABEL_47;
          v58 = *v48;
          v19 = *v39;
        }
        else
        {
          if ( !v57 )
            goto LABEL_47;
          gameObject = UnityEngine_Component__get_gameObject(*v39, 0LL);
          GameObjectExtensions__SafeSetParent_31184716((UnityEngine_GameObject_o *)v55, gameObject, 0LL);
          if ( !v55 )
            goto LABEL_47;
          Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v55,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
          {
            v62 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v61, v56);
            System_Action___ctor(
              v62,
              (Il2CppObject *)v31,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__1__,
              0LL);
            if ( !Component_srcLineSprite )
              goto LABEL_47;
            CommonEffectActionComponent__SetEventAction(
              (CommonEffectActionComponent_o *)Component_srcLineSprite,
              0,
              v62,
              0LL);
            v65 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v63, v64);
            System_Action___ctor(
              v65,
              (Il2CppObject *)v31,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__2__,
              0LL);
            CommonEffectActionComponent__SetEventAction(
              (CommonEffectActionComponent_o *)Component_srcLineSprite,
              1,
              v65,
              0LL);
            v68 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v66, v67);
            System_Action___ctor(
              v68,
              (Il2CppObject *)v31,
              Method_EventInfoCommandAssistLevelControl___c__DisplayClass16_0__PlayAnim_b__3__,
              0LL);
            *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v68;
            sub_B0D840(
              (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
              (System_Int32_array **)v68,
              v69,
              v70,
              v71,
              v72,
              v73,
              v74);
            goto LABEL_44;
          }
          v19 = *v39;
          if ( !*v39 )
            goto LABEL_47;
          v58 = *v48;
        }
        EventInfoCommandAssistLevelComponent__UpdateDisp((EventInfoCommandAssistLevelComponent_o *)v19, v58, v56);
LABEL_44:
        if ( (__int64)++v30 >= size )
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
    sub_B0D97C(this);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = assistCompnentList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v14 = sub_B0D9A8(this);
      sub_B0D948(v14, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct EventInfoCommandAssistLevelComponent_array *assistCompnentList; // x8
  EventInfoCommandAssistLevelComponent_o *v11; // x20
  __int64 v12; // x26
  struct UILabel_o **p_levelLabel; // x27
  EventInfoCommandAssistLevelComponent_AssistData_o *v14; // x22
  __int64 v15; // x1
  int32_t v16; // w23
  struct EventUiEntity_o *v17; // x8
  EventCommandAssistMaster_o *eventCommandAssistMst; // x24
  int32_t eventId; // w25
  int32_t v20; // w8
  struct EventUiEntity_o *v21; // x8
  const MethodInfo *v22; // x3
  int32_t assistData; // w8
  struct EventInfoCommandAssistLevelComponent_array *v24; // x8
  __int64 v25; // x0

  if ( (byte_421557D & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCommandAssistLevelComponent_AssistData_TypeInfo, entitys);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_421557D = 1;
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
      sub_B0D97C(titleSprite);
    }
    v11 = titleSprite;
    v12 = 0LL;
    p_levelLabel = &titleSprite->fields.levelLabel;
    while ( (int)v12 < (signed int)assistCompnentList->max_length )
    {
      if ( !v11 )
        goto LABEL_38;
      if ( (int)v12 >= SLODWORD(v11->fields.skillIconSprite) )
        break;
      v14 = (EventInfoCommandAssistLevelComponent_AssistData_o *)sub_B0D974(
                                                                   EventInfoCommandAssistLevelComponent_AssistData_TypeInfo,
                                                                   v8,
                                                                   v9);
      EventInfoCommandAssistLevelComponent_AssistData___ctor(v14, 0LL);
      if ( (unsigned int)v12 >= LODWORD(v11->fields.skillIconSprite) )
        goto LABEL_40;
      if ( v14 )
      {
        v16 = *((_DWORD *)p_levelLabel + v12);
        v14->fields.assistId = v16;
        v17 = this->fields.eventUiEntity;
        if ( v17 )
        {
          eventCommandAssistMst = this->fields.eventCommandAssistMst;
          eventId = v17->fields.eventId;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4215640 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v15);
            byte_4215640 = 1;
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
                                                                      v16,
                                                                      *(_DWORD *)(*(_QWORD *)&titleSprite[3].fields.m_CachedPtr
                                                                                + 520LL),
                                                                      0,
                                                                      0LL);
            v20 = titleSprite ? LODWORD(titleSprite->fields.commandAssistLevelControl) : 0;
            v14->fields.oldLv = v20;
            v21 = this->fields.eventUiEntity;
            if ( v21 )
            {
              titleSprite = (EventInfoCommandAssistLevelComponent_o *)this->fields.eventCommandAssistMst;
              if ( titleSprite )
              {
                titleSprite = (EventInfoCommandAssistLevelComponent_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                          (EventCommandAssistMaster_o *)titleSprite,
                                                                          v21->fields.eventId,
                                                                          v14->fields.assistId,
                                                                          -1,
                                                                          0,
                                                                          0LL);
                if ( titleSprite )
                {
                  v14->fields.lv = (int32_t)titleSprite->fields.commandAssistLevelControl;
                  assistData = (int32_t)titleSprite->fields.assistData;
                }
                else
                {
                  assistData = 0;
                  v14->fields.lv = 0;
                }
                v14->fields.imageId = assistData;
                v24 = this->fields.assistCompnentList;
                if ( v24 )
                {
                  if ( (unsigned int)v12 >= v24->max_length )
                  {
LABEL_40:
                    v25 = sub_B0D9A8(titleSprite);
                    sub_B0D948(v25, 0LL);
                  }
                  titleSprite = v24->m_Items[v12];
                  if ( titleSprite )
                  {
                    EventInfoCommandAssistLevelComponent__Setup(titleSprite, this, v14, v22);
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
    sub_B0D97C(this);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___PlayAnim_b__16_0(
        EventInfoCommandAssistLevelControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4215580 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__, method);
    byte_4215580 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.seName, 0LL) )
  {
    v3 = Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__;
    if ( (*((_BYTE *)Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_EventInfoCommandAssistLevelControl__PlayAnim_b__16_0__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
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
    sub_B0D97C(0LL);
  EventInfoCommandAssistLevelComponent__UpdateDispIcon(assistComponent, 0LL);
}


void __fastcall EventInfoCommandAssistLevelControl___c__DisplayClass16_0___PlayAnim_b__3(
        EventInfoCommandAssistLevelControl___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  EventInfoCommandAssistLevelComponent_o *assistComponent; // x0

  if ( (byte_4211B56 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211B56 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AC8 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211AC8 = 1;
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
    sub_B0D97C(0LL);
  EventInfoCommandAssistLevelComponent__UpdateDispLevel(assistComponent, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}