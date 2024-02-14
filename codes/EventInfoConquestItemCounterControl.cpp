void __fastcall EventInfoConquestItemCounterControl___ctor(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421559B & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__,
      method);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo, v4);
    byte_421559B = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemSprites,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  int64_t Instance; // x0
  UserItemMaster_o *v11; // x25
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  __int64 v13; // x22
  il2cpp_array_size_t v14; // w24
  il2cpp_array_size_t v15; // w8
  __int64 v16; // x8
  __int64 v17; // x8
  const MethodInfo *v18; // x4
  int32_t *v19; // x8
  struct EventInfoConquestItemCounterComponent_array *v20; // x9
  _DWORD *v21; // x10
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  EventConquestRewardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventInfoConquestItemCounterControl_o *v26; // x20
  struct EventInfoConquestItemCounterComponent_array *v27; // x8
  UserQuestMaster_o *v28; // x22
  signed int v29; // w26
  struct EventInfoConquestItemCounterComponent_array *v30; // x8
  EventInfoConquestItemCounterComponent_o *v31; // x8
  int64_t v32; // x24
  UserItemMaster_o *v33; // x19
  const MethodInfo *v34; // x4
  int v35; // w8
  int64_t v36; // x25
  __int64 v37; // x21
  int32_t v38; // w23
  int32_t *v39; // x27
  int32_t *v40; // x8
  struct EventInfoConquestItemCounterComponent_array *v41; // x9
  int32_t v42; // w1
  __int64 v43; // x0
  EventConquestRewardMaster_o *v44; // [xsp+0h] [xbp-60h]

  if ( (byte_421559A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventConquestRewardMaster___, obj);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B0D8A4(&EventConquestInfo___TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421559A = 1;
  }
  v9 = sub_B0D964(obj, EventConquestInfo___TypeInfo);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v11 = (UserItemMaster_o *)Instance;
  if ( v9 && *(_QWORD *)(v9 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v13 = 4LL;
      while ( 1 )
      {
        v14 = v13 - 4;
        if ( (int)v13 - 4 >= (signed int)conquestItems->max_length )
          break;
        v15 = *(_DWORD *)(v9 + 24);
        if ( (int)v14 >= (int)v15 )
          break;
        if ( v14 >= v15 )
          goto LABEL_76;
        v16 = *(_QWORD *)(v9 + 8 * v13);
        if ( !v16 )
          goto LABEL_74;
        if ( *(_DWORD *)(v16 + 16) == 2 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( v14 >= *(_DWORD *)(v9 + 24) )
            goto LABEL_76;
          v17 = *(_QWORD *)(v9 + 8 * v13);
          if ( !v17 || !v11 )
            goto LABEL_74;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v11, Instance, *(_DWORD *)(v17 + 20), 0LL);
          if ( Instance )
          {
            if ( *(_DWORD *)(Instance + 24) == 1 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_74;
              v19 = (int32_t *)(Instance + 96);
            }
            else
            {
              v19 = (int32_t *)(Instance + 28);
            }
            v20 = this->fields.conquestItems;
            if ( !v20 )
              goto LABEL_74;
            if ( v14 >= v20->max_length || v14 >= *(_DWORD *)(v9 + 24) )
              goto LABEL_76;
            v21 = *(_DWORD **)(v9 + 8 * v13);
            if ( !v21 )
              goto LABEL_74;
            Instance = *((_QWORD *)&v20->obj.klass + v13);
            if ( !Instance )
              goto LABEL_74;
            if ( *(_DWORD *)(Instance + 72) == v21[5] )
            {
              v22 = v21[8];
              v23 = v21[9];
              v24 = *v19;
              *(_DWORD *)(Instance + 80) = v23;
              *(_DWORD *)(Instance + 84) = v22;
              *(_DWORD *)(Instance + 76) = v24;
              EventInfoConquestItemCounterComponent__SetLabel(
                (EventInfoConquestItemCounterComponent_o *)Instance,
                v24,
                v22,
                v23,
                v18);
            }
          }
        }
        conquestItems = this->fields.conquestItems;
        ++v13;
        if ( !conquestItems )
          goto LABEL_74;
      }
      return;
    }
LABEL_74:
    sub_B0D97C(Instance);
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  MasterData_WarQuestSelectionMaster = (EventConquestRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v26 = this;
  v27 = this->fields.conquestItems;
  if ( !v27 )
    goto LABEL_74;
  v28 = (UserQuestMaster_o *)Instance;
  v29 = 0;
  v44 = MasterData_WarQuestSelectionMaster;
  while ( v29 < (signed int)v27->max_length )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v30 = v26->fields.conquestItems;
    if ( !v30 )
      goto LABEL_74;
    if ( v29 >= v30->max_length )
      goto LABEL_76;
    v31 = v30->m_Items[v29];
    if ( !v31 || !v11 )
      goto LABEL_74;
    Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v11, Instance, v31->fields._itemId_k__BackingField, 0LL);
    if ( Instance )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_74;
      v32 = Instance;
      v33 = v11;
      Instance = (int64_t)EventConquestRewardMaster__getList(
                            MasterData_WarQuestSelectionMaster,
                            v26->fields.eventId,
                            0LL);
      if ( Instance )
      {
        v35 = *(_DWORD *)(Instance + 24);
        v36 = Instance;
        if ( v35 >= 1 )
        {
          v37 = 0LL;
          v38 = 0;
          while ( (unsigned int)v37 < v35 )
          {
            v39 = *(int32_t **)(v36 + 32 + 8 * v37);
            if ( !v39 )
              goto LABEL_74;
            if ( v39[6] == 2 && v39[7] == *(_DWORD *)(v32 + 24) )
            {
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              if ( !v28 )
                goto LABEL_74;
              Instance = (int64_t)UserQuestMaster__getEntityFromId(v28, Instance, v39[5], 0LL);
              if ( !v39[5] || Instance && *(int *)(Instance + 40) >= 1 )
                v38 += v39[8];
            }
            v35 = *(_DWORD *)(v36 + 24);
            if ( (int)++v37 >= v35 )
              goto LABEL_65;
          }
LABEL_76:
          v43 = sub_B0D9A8(Instance);
          sub_B0D948(v43, 0LL);
        }
      }
      v38 = 0;
LABEL_65:
      if ( *(_DWORD *)(v32 + 24) == 1 )
      {
        Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
        v26 = this;
        if ( !Instance )
          goto LABEL_74;
        v11 = v33;
        v40 = (int32_t *)(Instance + 96);
      }
      else
      {
        v26 = this;
        v40 = (int32_t *)(v32 + 28);
        v11 = v33;
      }
      v41 = v26->fields.conquestItems;
      if ( !v41 )
        goto LABEL_74;
      if ( v29 >= v41->max_length )
        goto LABEL_76;
      Instance = (int64_t)v41->m_Items[v29];
      if ( !Instance )
        goto LABEL_74;
      v42 = *v40;
      *(_DWORD *)(Instance + 80) = 0;
      *(_DWORD *)(Instance + 84) = v38;
      *(_DWORD *)(Instance + 76) = v42;
      EventInfoConquestItemCounterComponent__SetLabel(
        (EventInfoConquestItemCounterComponent_o *)Instance,
        v42,
        v38,
        0,
        v34);
      MasterData_WarQuestSelectionMaster = v44;
    }
    v27 = v26->fields.conquestItems;
    ++v29;
    if ( !v27 )
      goto LABEL_74;
  }
}


void __fastcall EventInfoConquestItemCounterControl__SetEventId(
        EventInfoConquestItemCounterControl_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterControl_o *v4; // x20
  EventInfoConquestItemCounterControl_o *v5; // x0
  Il2CppObject *v6; // x1
  const MethodInfo *v7; // x2

  v4 = this;
  if ( (byte_4215599 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl_o *)sub_B0D8A4(&int_TypeInfo, val);
    byte_4215599 = 1;
  }
  if ( !val )
    sub_B0D97C(this);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v4->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val);
  }
  else
  {
    v5 = (EventInfoConquestItemCounterControl_o *)sub_B0DC70(val);
    EventInfoConquestItemCounterControl__SetConquestInfos(v5, v6, v7);
  }
}


void __fastcall EventInfoConquestItemCounterControl__Setup(
        EventInfoConquestItemCounterControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  EventInfoConquestItemCounterControl___c_c *v16; // x0
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v19; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_String_o **v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_String_o **v32; // x20
  __int64 v33; // x25
  unsigned __int64 v34; // x28
  EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *v35; // x21
  System_String_o *v36; // x8
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x24
  const MethodInfo *v39; // x3
  struct EventInfoConquestItemCounterComponent_array *v40; // x8
  EventInfoConquestItemCounterComponent_o *v41; // x8
  __int64 v42; // x0

  if ( (byte_4215597 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___, entity);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v7);
    sub_B0D8A4(&Method_System_Func_EventUiValueEntity__int___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo, v10);
    sub_B0D8A4(&System_Func_EventUiValueEntity__int__TypeInfo, v11);
    sub_B0D8A4(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, v12);
    sub_B0D8A4(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__, v13);
    sub_B0D8A4(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo, v14);
    sub_B0D8A4(&EventInfoConquestItemCounterControl___c_TypeInfo, v15);
    byte_4215597 = 1;
  }
  if ( entity )
  {
    v16 = EventInfoConquestItemCounterControl___c_TypeInfo;
    if ( (BYTE3(EventInfoConquestItemCounterControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoConquestItemCounterControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoConquestItemCounterControl___c_TypeInfo);
      v16 = EventInfoConquestItemCounterControl___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                  System_Func_EventUiValueEntity__int__TypeInfo,
                                                                                  entity,
                                                                                  method);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__7_0,
        v19,
        Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__,
        (const MethodInfo_2619564 *)Method_System_Func_EventUiValueEntity__int___ctor__);
      v20 = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      v20->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v20->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v28 = (System_String_o **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                v27,
                                (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_28:
      sub_B0D97C(v28);
    v32 = v28;
    v33 = 4LL;
    while ( 1 )
    {
      v34 = v33 - 4;
      if ( v33 - 4 >= (int)conquestItems->max_length )
        break;
      v35 = (EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *)sub_B0D974(
                                                                            EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo,
                                                                            v29,
                                                                            v30);
      EventInfoConquestItemCounterControl___c__DisplayClass7_0___ctor(v35, 0LL);
      v28 = (System_String_o **)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                  (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v34 < (int)v28 )
      {
        if ( !v32 )
          goto LABEL_28;
        if ( v34 >= *((unsigned int *)v32 + 6) )
          goto LABEL_30;
        v36 = v32[v33];
        if ( !v36 )
          goto LABEL_28;
        if ( *(_DWORD *)&v36->fields.m_firstChar == 1 )
        {
          if ( !v35 )
            goto LABEL_28;
          v28 = (System_String_o **)System_Int32__TryParse((System_String_o *)v36[1].klass, &v35->fields.itemId, 0LL);
          if ( ((unsigned __int8)v28 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo,
                                                                                       v29,
                                                                                       v30);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v38,
              (Il2CppObject *)v35,
              Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
              (const MethodInfo_26189B8 *)Method_System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool___ctor__);
            v28 = (System_String_o **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                        (System_Func_TSource__bool__o *)v38,
                                        (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
            if ( v28 )
            {
              v40 = this->fields.conquestItems;
              if ( !v40 )
                goto LABEL_28;
              if ( v34 >= v40->max_length )
              {
LABEL_30:
                v42 = sub_B0D9A8(v28);
                sub_B0D948(v42, 0LL);
              }
              v41 = (EventInfoConquestItemCounterComponent_o *)*((_QWORD *)&v40->obj.klass + v33);
              if ( !v41 )
                goto LABEL_28;
              EventInfoConquestItemCounterComponent__SetItem(v41, v35->fields.itemId, v28[3], v39);
            }
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v33;
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

  if ( (byte_4215596 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_16515/*"armaments_title"*/, v5);
    sub_B0D8A4(&StringLiteral_5609/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, v6);
    byte_4215596 = 1;
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
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_16515/*"armaments_title"*/, 0LL);
  }
  armamentLabel = this->fields.armamentLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5609/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0LL);
  if ( !armamentLabel )
    sub_B0D97C(v10);
  UILabel__set_text(armamentLabel, v10, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterControl__playAnim(
        EventInfoConquestItemCounterControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4215598 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, callback);
    byte_4215598 = 1;
  }
  v5 = sub_B0D974(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, callback, method);
  EventInfoConquestItemCounterControl__playAnim_d__9___ctor(
    (EventInfoConquestItemCounterControl__playAnim_d__9_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v5;
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
  Il2CppObject *v3; // x19
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211B5D & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoConquestItemCounterControl___c_TypeInfo, v1);
    byte_4211B5D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoConquestItemCounterControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  EventInfoConquestItemCounterControl__playAnim_d__9_o *v2; // x19
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterControl_o *_4__this; // x20
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x21
  int max_length; // w8
  unsigned int v7; // w22
  int *p_i_5__2; // x21
  struct EventInfoConquestItemCounterComponent_array *v9; // x8
  int v10; // w9
  int v11; // w10
  bool result; // w0
  __int64 v13; // x0
  Il2CppObject **p__2__current; // x19
  __int64 v15; // x0
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4211B5E & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)sub_B0D8A4(&int_TypeInfo, method);
    byte_4211B5E = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_i_5__2 = &v2->fields._i_5__2;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
    conquestItems = _4__this->fields.conquestItems;
    if ( !conquestItems )
      goto LABEL_21;
    max_length = conquestItems->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
        {
LABEL_25:
          v15 = sub_B0D9A8(this);
          sub_B0D948(v15, 0LL);
        }
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)conquestItems->m_Items[v7];
        if ( !this )
          break;
        EventInfoConquestItemCounterComponent__PlayAnim((EventInfoConquestItemCounterComponent_o *)this, 0LL);
        max_length = conquestItems->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_12;
      }
LABEL_21:
      sub_B0D97C(this);
    }
LABEL_12:
    v2->fields._i_5__2 = 0;
    p_i_5__2 = &v2->fields._i_5__2;
  }
  v9 = _4__this->fields.conquestItems;
  if ( !v9 )
    goto LABEL_21;
  v10 = *p_i_5__2;
  while ( 1 )
  {
    v11 = v9->max_length;
    if ( v10 >= v11 )
    {
      ActionExtensions__Call(v2->fields.callback, 0LL);
      return 0;
    }
    if ( v10 >= (unsigned int)v11 )
      goto LABEL_25;
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)v9->m_Items[v10];
    if ( !this )
      goto LABEL_21;
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)EventInfoConquestItemCounterComponent__get_IsAnimFinished(
                                                                     (EventInfoConquestItemCounterComponent_o *)this,
                                                                     0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v10 = *p_i_5__2 + 1;
    *p_i_5__2 = v10;
    v9 = _4__this->fields.conquestItems;
    if ( !v9 )
      goto LABEL_21;
  }
  v16 = 0;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v2->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &v2->fields.__2__current;
  sub_B0D840(p__2__current, v13);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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