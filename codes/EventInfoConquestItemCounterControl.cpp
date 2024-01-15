void __fastcall EventInfoConquestItemCounterControl___ctor(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FA106 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__,
      method);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo, v6);
    byte_40FA106 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemSprites,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoConquestItemCounterControl__PlayAnim(
        EventInfoConquestItemCounterControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  if ( this->fields.playType == type && this->fields.conquestItems )
  {
    v5 = EventInfoConquestItemCounterControl__playAnim(this, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall EventInfoConquestItemCounterControl__SetConquestInfos(
        EventInfoConquestItemCounterControl_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  WebViewManager_o *Instance; // x0
  int64_t MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UserItemMaster_o *v14; // x25
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  __int64 v16; // x22
  il2cpp_array_size_t v17; // w24
  il2cpp_array_size_t v18; // w8
  __int64 v19; // x8
  __int64 v20; // x8
  const MethodInfo *v21; // x4
  int32_t *v22; // x8
  struct EventInfoConquestItemCounterComponent_array *v23; // x9
  _DWORD *v24; // x10
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  WebViewManager_o *v28; // x0
  EventConquestRewardMaster_o *v29; // x21
  WebViewManager_o *v30; // x0
  WarQuestSelectionMaster_o *v31; // x0
  EventInfoConquestItemCounterControl_o *v32; // x20
  struct EventInfoConquestItemCounterComponent_array *v33; // x8
  UserQuestMaster_o *v34; // x22
  signed int v35; // w26
  struct EventInfoConquestItemCounterComponent_array *v36; // x8
  EventInfoConquestItemCounterComponent_o *v37; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *v39; // x24
  UserItemMaster_o *v40; // x19
  const MethodInfo *v41; // x4
  int v42; // w8
  int64_t v43; // x25
  __int64 v44; // x21
  int32_t v45; // w23
  int32_t *v46; // x27
  int64_t UserId; // x0
  int32_t *p_num; // x8
  struct EventInfoConquestItemCounterComponent_array *v49; // x9
  EventInfoConquestItemCounterComponent_o *v50; // x0
  int32_t v51; // w1
  EventConquestRewardMaster_o *v52; // [xsp+0h] [xbp-60h]

  if ( (byte_40FA105 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventConquestRewardMaster___, obj);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B16FFC(&EventConquestInfo___TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA105 = 1;
  }
  v9 = sub_B170BC(obj, EventConquestInfo___TypeInfo);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  MasterData_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v14 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( v9 && *(_QWORD *)(v9 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v16 = 4LL;
      while ( 1 )
      {
        v17 = v16 - 4;
        if ( (int)v16 - 4 >= (signed int)conquestItems->max_length )
          break;
        v18 = *(_DWORD *)(v9 + 24);
        if ( (int)v17 >= (int)v18 )
          break;
        if ( v17 >= v18 )
          goto LABEL_76;
        v19 = *(_QWORD *)(v9 + 8 * v16);
        if ( !v19 )
          goto LABEL_74;
        if ( *(_DWORD *)(v19 + 16) == 2 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          MasterData_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
          if ( v17 >= *(_DWORD *)(v9 + 24) )
            goto LABEL_76;
          v20 = *(_QWORD *)(v9 + 8 * v16);
          if ( !v20 || !v14 )
            goto LABEL_74;
          MasterData_WarQuestSelectionMaster = (int64_t)UserItemMaster__GetEntityDefinitely(
                                                          v14,
                                                          MasterData_WarQuestSelectionMaster,
                                                          *(_DWORD *)(v20 + 20),
                                                          0LL);
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( *(_DWORD *)(MasterData_WarQuestSelectionMaster + 24) == 1 )
            {
              MasterData_WarQuestSelectionMaster = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_74;
              v22 = (int32_t *)(MasterData_WarQuestSelectionMaster + 96);
            }
            else
            {
              v22 = (int32_t *)(MasterData_WarQuestSelectionMaster + 28);
            }
            v23 = this->fields.conquestItems;
            if ( !v23 )
              goto LABEL_74;
            if ( v17 >= v23->max_length || v17 >= *(_DWORD *)(v9 + 24) )
              goto LABEL_76;
            v24 = *(_DWORD **)(v9 + 8 * v16);
            if ( !v24 )
              goto LABEL_74;
            MasterData_WarQuestSelectionMaster = *((_QWORD *)&v23->obj.klass + v16);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_74;
            if ( *(_DWORD *)(MasterData_WarQuestSelectionMaster + 72) == v24[5] )
            {
              v25 = v24[8];
              v26 = v24[9];
              v27 = *v22;
              *(_DWORD *)(MasterData_WarQuestSelectionMaster + 80) = v26;
              *(_DWORD *)(MasterData_WarQuestSelectionMaster + 84) = v25;
              *(_DWORD *)(MasterData_WarQuestSelectionMaster + 76) = v27;
              EventInfoConquestItemCounterComponent__SetLabel(
                (EventInfoConquestItemCounterComponent_o *)MasterData_WarQuestSelectionMaster,
                v27,
                v25,
                v26,
                v21);
            }
          }
        }
        conquestItems = this->fields.conquestItems;
        ++v16;
        if ( !conquestItems )
          goto LABEL_74;
      }
      return;
    }
LABEL_74:
    sub_B170D4();
  }
  v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v28 )
    goto LABEL_74;
  v29 = (EventConquestRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v28,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v30 )
    goto LABEL_74;
  v31 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v30,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v32 = this;
  v33 = this->fields.conquestItems;
  if ( !v33 )
    goto LABEL_74;
  v34 = (UserQuestMaster_o *)v31;
  v35 = 0;
  v52 = v29;
  while ( v35 < (signed int)v33->max_length )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    MasterData_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    v36 = v32->fields.conquestItems;
    if ( !v36 )
      goto LABEL_74;
    if ( v35 >= v36->max_length )
      goto LABEL_76;
    v37 = v36->m_Items[v35];
    if ( !v37 || !v14 )
      goto LABEL_74;
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                         v14,
                         MasterData_WarQuestSelectionMaster,
                         v37->fields._itemId_k__BackingField,
                         0LL);
    if ( EntityDefinitely )
    {
      if ( !v29 )
        goto LABEL_74;
      v39 = EntityDefinitely;
      v40 = v14;
      MasterData_WarQuestSelectionMaster = (int64_t)EventConquestRewardMaster__getList(v29, v32->fields.eventId, 0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v42 = *(_DWORD *)(MasterData_WarQuestSelectionMaster + 24);
        v43 = MasterData_WarQuestSelectionMaster;
        if ( v42 >= 1 )
        {
          v44 = 0LL;
          v45 = 0;
          while ( (unsigned int)v44 < v42 )
          {
            v46 = *(int32_t **)(v43 + 32 + 8 * v44);
            if ( !v46 )
              goto LABEL_74;
            if ( v46[6] == 2 && v46[7] == v39->fields.itemId )
            {
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              UserId = NetworkManager__get_UserId(0LL);
              if ( !v34 )
                goto LABEL_74;
              MasterData_WarQuestSelectionMaster = (int64_t)UserQuestMaster__getEntityFromId(v34, UserId, v46[5], 0LL);
              if ( !v46[5]
                || MasterData_WarQuestSelectionMaster && *(int *)(MasterData_WarQuestSelectionMaster + 40) >= 1 )
              {
                v45 += v46[8];
              }
            }
            v42 = *(_DWORD *)(v43 + 24);
            if ( (int)++v44 >= v42 )
              goto LABEL_65;
          }
LABEL_76:
          sub_B17100(MasterData_WarQuestSelectionMaster, v12, v13);
          sub_B170A0();
        }
      }
      v45 = 0;
LABEL_65:
      if ( v39->fields.itemId == 1 )
      {
        MasterData_WarQuestSelectionMaster = (int64_t)UserGameMaster__getSelfUserGame(0LL);
        v32 = this;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_74;
        v14 = v40;
        p_num = (int32_t *)(MasterData_WarQuestSelectionMaster + 96);
      }
      else
      {
        v32 = this;
        p_num = &v39->fields.num;
        v14 = v40;
      }
      v49 = v32->fields.conquestItems;
      if ( !v49 )
        goto LABEL_74;
      if ( v35 >= v49->max_length )
        goto LABEL_76;
      v50 = v49->m_Items[v35];
      if ( !v50 )
        goto LABEL_74;
      v51 = *p_num;
      v50->fields.addProductNum = 0;
      v50->fields.productNum = v45;
      v50->fields.itemNum = v51;
      EventInfoConquestItemCounterComponent__SetLabel(v50, v51, v45, 0, v41);
      v29 = v52;
    }
    v33 = v32->fields.conquestItems;
    ++v35;
    if ( !v33 )
      goto LABEL_74;
  }
}


void __fastcall EventInfoConquestItemCounterControl__SetEventId(
        EventInfoConquestItemCounterControl_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterControl_o *v5; // x0
  Il2CppObject *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_40FA104 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, val);
    byte_40FA104 = 1;
  }
  if ( !val )
    sub_B170D4();
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    this->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val);
  }
  else
  {
    v5 = (EventInfoConquestItemCounterControl_o *)sub_B173C8(val);
    EventInfoConquestItemCounterControl__SetConquestInfos(v5, v6, v7);
  }
}


void __fastcall EventInfoConquestItemCounterControl__Setup(
        EventInfoConquestItemCounterControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  EventInfoConquestItemCounterControl___c_c *v18; // x0
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v21; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  const MethodInfo *v33; // x3
  __int64 v34; // x4
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v36; // x20
  __int64 v37; // x25
  unsigned __int64 v38; // x28
  EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *v39; // x21
  WarBoardData_SquareRangeSearch_o *v40; // x0
  __int64 v41; // x8
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v43; // x24
  struct EventInfoConquestItemCounterComponent_array *v44; // x8
  EventInfoConquestItemCounterComponent_o *v45; // x8

  if ( (byte_40FA102 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___, entity);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v9);
    sub_B16FFC(&Method_System_Func_EventUiValueEntity__int___ctor__, v10);
    sub_B16FFC(&Method_System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool___ctor__, v11);
    sub_B16FFC(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo, v12);
    sub_B16FFC(&System_Func_EventUiValueEntity__int__TypeInfo, v13);
    sub_B16FFC(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, v14);
    sub_B16FFC(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__, v15);
    sub_B16FFC(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo, v16);
    sub_B16FFC(&EventInfoConquestItemCounterControl___c_TypeInfo, v17);
    byte_40FA102 = 1;
  }
  if ( entity )
  {
    v18 = EventInfoConquestItemCounterControl___c_TypeInfo;
    if ( (BYTE3(EventInfoConquestItemCounterControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoConquestItemCounterControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoConquestItemCounterControl___c_TypeInfo);
      v18 = EventInfoConquestItemCounterControl___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                  System_Func_EventUiValueEntity__int__TypeInfo,
                                                                                  entity,
                                                                                  method,
                                                                                  v3,
                                                                                  v4);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__7_0,
        v21,
        Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_EventUiValueEntity__int___ctor__);
      v22 = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      v22->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v22->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v30 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v29,
            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_28:
      sub_B170D4();
    v36 = v30;
    v37 = 4LL;
    while ( 1 )
    {
      v38 = v37 - 4;
      if ( v37 - 4 >= (int)conquestItems->max_length )
        break;
      v39 = (EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *)sub_B170CC(
                                                                            EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo,
                                                                            v31,
                                                                            v32,
                                                                            v33,
                                                                            v34);
      EventInfoConquestItemCounterControl___c__DisplayClass7_0___ctor(v39, 0LL);
      v40 = (WarBoardData_SquareRangeSearch_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                                                  (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v38 < (int)v40 )
      {
        if ( !v36 )
          goto LABEL_28;
        if ( v38 >= v36->max_length )
          goto LABEL_30;
        v41 = *((_QWORD *)&v36->obj.klass + v37);
        if ( !v41 )
          goto LABEL_28;
        if ( *(_DWORD *)(v41 + 20) == 1 )
        {
          if ( !v39 )
            goto LABEL_28;
          if ( System_Int32__TryParse(*(System_String_o **)(v41 + 24), &v39->fields.itemId, 0LL) )
          {
            itemSprites = this->fields.itemSprites;
            v43 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                       System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo,
                                                                                       v31,
                                                                                       v32,
                                                                                       v33,
                                                                                       v34);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v43,
              (Il2CppObject *)v39,
              Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
              (const MethodInfo_2B6AB40 *)Method_System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool___ctor__);
            v40 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                    (System_Func_TSource__bool__o *)v43,
                    (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
            if ( v40 )
            {
              v44 = this->fields.conquestItems;
              if ( !v44 )
                goto LABEL_28;
              if ( v38 >= v44->max_length )
              {
LABEL_30:
                sub_B17100(v40, v31, v32);
                sub_B170A0();
              }
              v45 = (EventInfoConquestItemCounterComponent_o *)*((_QWORD *)&v44->obj.klass + v37);
              if ( !v45 )
                goto LABEL_28;
              EventInfoConquestItemCounterComponent__SetItem(
                v45,
                v39->fields.itemId,
                (System_String_o *)v40[1].klass,
                v33);
            }
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v37;
      if ( !conquestItems )
        goto LABEL_28;
    }
  }
}


void __fastcall EventInfoConquestItemCounterControl__Start(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *crestSprite; // x20
  UISprite_o *v8; // x20
  UILabel_o *armamentLabel; // x19
  System_String_o *v10; // x0

  if ( (byte_40FA101 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_16402/*"armaments_title"*/, v5);
    sub_B16FFC(&StringLiteral_5578/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, v6);
    byte_40FA101 = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0LL, 0LL) )
  {
    v8 = this->fields.crestSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_16402/*"armaments_title"*/, 0LL);
  }
  armamentLabel = this->fields.armamentLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5578/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0LL);
  if ( !armamentLabel )
    sub_B170D4();
  UILabel__set_text(armamentLabel, v10, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterControl__playAnim(
        EventInfoConquestItemCounterControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FA103 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, callback);
    byte_40FA103 = 1;
  }
  v7 = sub_B170CC(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, callback, method, v3, v4);
  EventInfoConquestItemCounterControl__playAnim_d__9___ctor(
    (EventInfoConquestItemCounterControl__playAnim_d__9_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EventInfoConquestItemCounterControl_ItemSpriteData___ctor(
        EventInfoConquestItemCounterControl_ItemSpriteData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoConquestItemCounterControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FCB & 1) == 0 )
  {
    sub_B16FFC(&EventInfoConquestItemCounterControl___c_TypeInfo, v1);
    byte_40F6FCB = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoConquestItemCounterControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventInfoConquestItemCounterControl___c___ctor(
        EventInfoConquestItemCounterControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoConquestItemCounterControl___c___Setup_b__7_0(
        EventInfoConquestItemCounterControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return ent->fields.priority;
}


void __fastcall EventInfoConquestItemCounterControl___c__DisplayClass7_0___ctor(
        EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoConquestItemCounterControl___c__DisplayClass7_0___Setup_b__1(
        EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *this,
        EventInfoConquestItemCounterControl_ItemSpriteData_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_B170D4();
  return item->fields.itemId == this->fields.itemId;
}


void __fastcall EventInfoConquestItemCounterControl__playAnim_d__9___ctor(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventInfoConquestItemCounterControl__playAnim_d__9__MoveNext(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoConquestItemCounterControl__playAnim_d__9_o *v3; // x19
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterControl_o *_4__this; // x20
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x21
  int max_length; // w8
  unsigned int v8; // w22
  EventInfoConquestItemCounterComponent_o *v9; // x0
  int *p_i_5__2; // x21
  struct EventInfoConquestItemCounterComponent_array *v11; // x8
  int v12; // w9
  int v13; // w10
  EventInfoConquestItemCounterComponent_o *v14; // x0
  bool result; // w0
  System_Int32_array **v16; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_40F6FCC & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)sub_B16FFC(&int_TypeInfo, method);
    byte_40F6FCC = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_i_5__2 = &v3->fields._i_5__2;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
    conquestItems = _4__this->fields.conquestItems;
    if ( !conquestItems )
      goto LABEL_21;
    max_length = conquestItems->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
        {
LABEL_25:
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v9 = conquestItems->m_Items[v8];
        if ( !v9 )
          break;
        EventInfoConquestItemCounterComponent__PlayAnim(v9, 0LL);
        max_length = conquestItems->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_12;
      }
LABEL_21:
      sub_B170D4();
    }
LABEL_12:
    v3->fields._i_5__2 = 0;
    p_i_5__2 = &v3->fields._i_5__2;
  }
  v11 = _4__this->fields.conquestItems;
  if ( !v11 )
    goto LABEL_21;
  v12 = *p_i_5__2;
  while ( 1 )
  {
    v13 = v11->max_length;
    if ( v12 >= v13 )
    {
      ActionExtensions__Call(v3->fields.callback, 0LL);
      return 0;
    }
    if ( v12 >= (unsigned int)v13 )
      goto LABEL_25;
    v14 = v11->m_Items[v12];
    if ( !v14 )
      goto LABEL_21;
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)EventInfoConquestItemCounterComponent__get_IsAnimFinished(
                                                                     v14,
                                                                     0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v12 = *p_i_5__2 + 1;
    *p_i_5__2 = v12;
    v11 = _4__this->fields.conquestItems;
    if ( !v11 )
      goto LABEL_21;
  }
  v24 = 0;
  v16 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v3->fields.__2__current = (Il2CppObject *)v16;
  p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
  sub_B16F98(p__2__current, v16, v18, v19, v20, v21, v22, v23);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall EventInfoConquestItemCounterControl__playAnim_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoConquestItemCounterControl__playAnim_d__9__System_Collections_IEnumerator_Reset(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall EventInfoConquestItemCounterControl__playAnim_d__9__System_Collections_IEnumerator_get_Current(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoConquestItemCounterControl__playAnim_d__9__System_IDisposable_Dispose(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  ;
}