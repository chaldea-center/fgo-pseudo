void __fastcall EventInfoConquestItemCounterControl___ctor(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E94B7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo,
      v5,
      v6,
      v7);
    byte_42E94B7 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemSprites,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x21
  int64_t Instance; // x0
  __int64 v22; // x1
  UserItemMaster_o *v23; // x25
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  __int64 v25; // x22
  il2cpp_array_size_t v26; // w24
  il2cpp_array_size_t v27; // w8
  __int64 v28; // x8
  __int64 v29; // x8
  const MethodInfo *v30; // x4
  int32_t *v31; // x8
  struct EventInfoConquestItemCounterComponent_array *v32; // x9
  _DWORD *v33; // x10
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  EventConquestRewardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventInfoConquestItemCounterControl_o *v38; // x20
  struct EventInfoConquestItemCounterComponent_array *v39; // x8
  UserQuestMaster_o *v40; // x22
  signed int v41; // w26
  struct EventInfoConquestItemCounterComponent_array *v42; // x8
  EventInfoConquestItemCounterComponent_o *v43; // x8
  int64_t v44; // x24
  UserItemMaster_o *v45; // x19
  const MethodInfo *v46; // x4
  int v47; // w8
  int64_t v48; // x25
  __int64 v49; // x21
  int32_t v50; // w23
  int32_t *v51; // x27
  int32_t *v52; // x8
  struct EventInfoConquestItemCounterComponent_array *v53; // x9
  int32_t v54; // w1
  __int64 v55; // x0
  EventConquestRewardMaster_o *v56; // [xsp+0h] [xbp-60h]

  if ( (byte_42E94B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventConquestRewardMaster___, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v8, v9, v10);
    sub_B5D5C4(&EventConquestInfo___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E94B6 = 1;
  }
  v20 = sub_B5D684(obj, EventConquestInfo___TypeInfo);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  v23 = (UserItemMaster_o *)Instance;
  if ( v20 && *(_QWORD *)(v20 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v25 = 4LL;
      while ( 1 )
      {
        v26 = v25 - 4;
        if ( (int)v25 - 4 >= (signed int)conquestItems->max_length )
          break;
        v27 = *(_DWORD *)(v20 + 24);
        if ( (int)v26 >= (int)v27 )
          break;
        if ( v26 >= v27 )
          goto LABEL_76;
        v28 = *(_QWORD *)(v20 + 8 * v25);
        if ( !v28 )
          goto LABEL_74;
        if ( *(_DWORD *)(v28 + 16) == 2 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( v26 >= *(_DWORD *)(v20 + 24) )
            goto LABEL_76;
          v29 = *(_QWORD *)(v20 + 8 * v25);
          if ( !v29 || !v23 )
            goto LABEL_74;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v23, Instance, *(_DWORD *)(v29 + 20), 0LL);
          if ( Instance )
          {
            if ( *(_DWORD *)(Instance + 24) == 1 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_74;
              v31 = (int32_t *)(Instance + 96);
            }
            else
            {
              v31 = (int32_t *)(Instance + 28);
            }
            v32 = this->fields.conquestItems;
            if ( !v32 )
              goto LABEL_74;
            if ( v26 >= v32->max_length || v26 >= *(_DWORD *)(v20 + 24) )
              goto LABEL_76;
            v33 = *(_DWORD **)(v20 + 8 * v25);
            if ( !v33 )
              goto LABEL_74;
            Instance = *((_QWORD *)&v32->obj.klass + v25);
            if ( !Instance )
              goto LABEL_74;
            if ( *(_DWORD *)(Instance + 72) == v33[5] )
            {
              v34 = v33[8];
              v35 = v33[9];
              v36 = *v31;
              *(_DWORD *)(Instance + 80) = v35;
              *(_DWORD *)(Instance + 84) = v34;
              *(_DWORD *)(Instance + 76) = v36;
              EventInfoConquestItemCounterComponent__SetLabel(
                (EventInfoConquestItemCounterComponent_o *)Instance,
                v36,
                v34,
                v35,
                v30);
            }
          }
        }
        conquestItems = this->fields.conquestItems;
        ++v25;
        if ( !conquestItems )
          goto LABEL_74;
      }
      return;
    }
LABEL_74:
    sub_B5D69C(Instance, v22);
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  MasterData_WarQuestSelectionMaster = (EventConquestRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v38 = this;
  v39 = this->fields.conquestItems;
  if ( !v39 )
    goto LABEL_74;
  v40 = (UserQuestMaster_o *)Instance;
  v41 = 0;
  v56 = MasterData_WarQuestSelectionMaster;
  while ( v41 < (signed int)v39->max_length )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v42 = v38->fields.conquestItems;
    if ( !v42 )
      goto LABEL_74;
    if ( v41 >= v42->max_length )
      goto LABEL_76;
    v43 = v42->m_Items[v41];
    if ( !v43 || !v23 )
      goto LABEL_74;
    Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v23, Instance, v43->fields._itemId_k__BackingField, 0LL);
    if ( Instance )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_74;
      v44 = Instance;
      v45 = v23;
      Instance = (int64_t)EventConquestRewardMaster__getList(
                            MasterData_WarQuestSelectionMaster,
                            v38->fields.eventId,
                            0LL);
      if ( Instance )
      {
        v47 = *(_DWORD *)(Instance + 24);
        v48 = Instance;
        if ( v47 >= 1 )
        {
          v49 = 0LL;
          v50 = 0;
          while ( (unsigned int)v49 < v47 )
          {
            v51 = *(int32_t **)(v48 + 32 + 8 * v49);
            if ( !v51 )
              goto LABEL_74;
            if ( v51[6] == 2 && v51[7] == *(_DWORD *)(v44 + 24) )
            {
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              if ( !v40 )
                goto LABEL_74;
              Instance = (int64_t)UserQuestMaster__getEntityFromId(v40, Instance, v51[5], 0LL);
              if ( !v51[5] || Instance && *(int *)(Instance + 40) >= 1 )
                v50 += v51[8];
            }
            v47 = *(_DWORD *)(v48 + 24);
            if ( (int)++v49 >= v47 )
              goto LABEL_65;
          }
LABEL_76:
          v55 = sub_B5D6C8(Instance);
          sub_B5D668(v55, 0LL);
        }
      }
      v50 = 0;
LABEL_65:
      if ( *(_DWORD *)(v44 + 24) == 1 )
      {
        Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
        v38 = this;
        if ( !Instance )
          goto LABEL_74;
        v23 = v45;
        v52 = (int32_t *)(Instance + 96);
      }
      else
      {
        v38 = this;
        v52 = (int32_t *)(v44 + 28);
        v23 = v45;
      }
      v53 = v38->fields.conquestItems;
      if ( !v53 )
        goto LABEL_74;
      if ( v41 >= v53->max_length )
        goto LABEL_76;
      Instance = (int64_t)v53->m_Items[v41];
      if ( !Instance )
        goto LABEL_74;
      v54 = *v52;
      *(_DWORD *)(Instance + 80) = 0;
      *(_DWORD *)(Instance + 84) = v50;
      *(_DWORD *)(Instance + 76) = v54;
      EventInfoConquestItemCounterComponent__SetLabel(
        (EventInfoConquestItemCounterComponent_o *)Instance,
        v54,
        v50,
        0,
        v46);
      MasterData_WarQuestSelectionMaster = v56;
    }
    v39 = v38->fields.conquestItems;
    ++v41;
    if ( !v39 )
      goto LABEL_74;
  }
}


void __fastcall EventInfoConquestItemCounterControl__SetEventId(
        EventInfoConquestItemCounterControl_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoConquestItemCounterControl_o *v5; // x20
  EventInfoConquestItemCounterControl_o *v6; // x0
  Il2CppObject *v7; // x1
  const MethodInfo *v8; // x2

  v5 = this;
  if ( (byte_42E94B5 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl_o *)sub_B5D5C4(&int_TypeInfo, (_DWORD)val, (_DWORD)method, v3);
    byte_42E94B5 = 1;
  }
  if ( !val )
    sub_B5D69C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val);
  }
  else
  {
    v6 = (EventInfoConquestItemCounterControl_o *)sub_B5D990(val);
    EventInfoConquestItemCounterControl__SetConquestInfos(v6, v7, v8);
  }
}


void __fastcall EventInfoConquestItemCounterControl__Setup(
        EventInfoConquestItemCounterControl_o *this,
        EventUiValueEntity_array *entity,
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
  EventInfoConquestItemCounterControl___c_c *v39; // x0
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v42; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_String_o **v51; // x0
  __int64 v52; // x1
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_String_o **v54; // x20
  __int64 v55; // x25
  unsigned __int64 v56; // x28
  EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *v57; // x21
  System_String_o *v58; // x8
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v60; // x24
  const MethodInfo *v61; // x3
  struct EventInfoConquestItemCounterComponent_array *v62; // x8
  EventInfoConquestItemCounterComponent_o *v63; // x8
  __int64 v64; // x0

  if ( (byte_42E94B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_EventUiValueEntity__int___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Func_EventUiValueEntity__int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, v27, v28, v29);
    sub_B5D5C4(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__, v30, v31, v32);
    sub_B5D5C4(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&EventInfoConquestItemCounterControl___c_TypeInfo, v36, v37, v38);
    byte_42E94B3 = 1;
  }
  if ( entity )
  {
    v39 = EventInfoConquestItemCounterControl___c_TypeInfo;
    if ( (BYTE3(EventInfoConquestItemCounterControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoConquestItemCounterControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoConquestItemCounterControl___c_TypeInfo);
      v39 = EventInfoConquestItemCounterControl___c_TypeInfo;
    }
    static_fields = v39->static_fields;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__7_0,
        v42,
        Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_EventUiValueEntity__int___ctor__);
      v43 = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      v43->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v43->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v51 = (System_String_o **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                v50,
                                (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_28:
      sub_B5D69C(v51, v52);
    v54 = v51;
    v55 = 4LL;
    while ( 1 )
    {
      v56 = v55 - 4;
      if ( v55 - 4 >= (int)conquestItems->max_length )
        break;
      v57 = (EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *)sub_B5D694(EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
      EventInfoConquestItemCounterControl___c__DisplayClass7_0___ctor(v57, 0LL);
      v51 = (System_String_o **)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                                  (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v56 < (int)v51 )
      {
        if ( !v54 )
          goto LABEL_28;
        if ( v56 >= *((unsigned int *)v54 + 6) )
          goto LABEL_30;
        v58 = v54[v55];
        if ( !v58 )
          goto LABEL_28;
        if ( *(_DWORD *)&v58->fields.m_firstChar == 1 )
        {
          if ( !v57 )
            goto LABEL_28;
          v51 = (System_String_o **)System_Int32__TryParse((System_String_o *)v58[1].klass, &v57->fields.itemId, 0LL);
          if ( ((unsigned __int8)v51 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            v60 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v60,
              (Il2CppObject *)v57,
              Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
              (const MethodInfo_2C2ECD0 *)Method_System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool___ctor__);
            v51 = (System_String_o **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                        (System_Func_TSource__bool__o *)v60,
                                        (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
            if ( v51 )
            {
              v62 = this->fields.conquestItems;
              if ( !v62 )
                goto LABEL_28;
              if ( v56 >= v62->max_length )
              {
LABEL_30:
                v64 = sub_B5D6C8(v51);
                sub_B5D668(v64, 0LL);
              }
              v63 = (EventInfoConquestItemCounterComponent_o *)*((_QWORD *)&v62->obj.klass + v55);
              if ( !v63 )
                goto LABEL_28;
              EventInfoConquestItemCounterComponent__SetItem(v63, v57->fields.itemId, v51[3], v61);
            }
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v55;
      if ( !conquestItems )
        goto LABEL_28;
    }
  }
}


void __fastcall EventInfoConquestItemCounterControl__Start(
        EventInfoConquestItemCounterControl_o *this,
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *crestSprite; // x20
  UISprite_o *v18; // x20
  UILabel_o *armamentLabel; // x19
  System_String_o *v20; // x0
  __int64 v21; // x1

  if ( (byte_42E94B2 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16664/*"armaments_title"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5670/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, v14, v15, v16);
    byte_42E94B2 = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0LL, 0LL) )
  {
    v18 = this->fields.crestSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_16664/*"armaments_title"*/, 0LL);
  }
  armamentLabel = this->fields.armamentLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5670/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0LL);
  if ( !armamentLabel )
    sub_B5D69C(v20, v21);
  UILabel__set_text(armamentLabel, v20, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterControl__playAnim(
        EventInfoConquestItemCounterControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42E94B4 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E94B4 = 1;
  }
  v6 = sub_B5D694(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
  EventInfoConquestItemCounterControl__playAnim_d__9___ctor(
    (EventInfoConquestItemCounterControl__playAnim_d__9_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall EventInfoConquestItemCounterControl_ItemSpriteData___ctor(
        EventInfoConquestItemCounterControl_ItemSpriteData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoConquestItemCounterControl___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E6531 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoConquestItemCounterControl___c_TypeInfo, v1, v2, v3);
    byte_42E6531 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoConquestItemCounterControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  EventInfoConquestItemCounterControl__playAnim_d__9_o *v4; // x19
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterControl_o *_4__this; // x20
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x21
  int max_length; // w8
  unsigned int v9; // w22
  int *p_i_5__2; // x21
  struct EventInfoConquestItemCounterComponent_array *v11; // x8
  int v12; // w9
  int v13; // w10
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  __int64 v16; // x0
  int v17; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E6532 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6532 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_i_5__2 = &v4->fields._i_5__2;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
    conquestItems = _4__this->fields.conquestItems;
    if ( !conquestItems )
      goto LABEL_21;
    max_length = conquestItems->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
        {
LABEL_25:
          v16 = sub_B5D6C8(this);
          sub_B5D668(v16, 0LL);
        }
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)conquestItems->m_Items[v9];
        if ( !this )
          break;
        EventInfoConquestItemCounterComponent__PlayAnim((EventInfoConquestItemCounterComponent_o *)this, 0LL);
        max_length = conquestItems->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_12;
      }
LABEL_21:
      sub_B5D69C(this, method);
    }
LABEL_12:
    v4->fields._i_5__2 = 0;
    p_i_5__2 = &v4->fields._i_5__2;
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
      ActionExtensions__Call(v4->fields.callback, 0LL);
      return 0;
    }
    if ( v12 >= (unsigned int)v13 )
      goto LABEL_25;
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)v11->m_Items[v12];
    if ( !this )
      goto LABEL_21;
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)EventInfoConquestItemCounterComponent__get_IsAnimFinished(
                                                                     (EventInfoConquestItemCounterComponent_o *)this,
                                                                     0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    v12 = *p_i_5__2 + 1;
    *p_i_5__2 = v12;
    v11 = _4__this->fields.conquestItems;
    if ( !v11 )
      goto LABEL_21;
  }
  v17 = 0;
  v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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