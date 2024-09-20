void __fastcall EventInfoConquestItemCounterControl___ctor(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5BB0A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
    byte_4A5BB0A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemSprites, (int32_t)v3, v4, v5);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  __int64 v5; // x21
  int64_t Instance; // x0
  __int64 v7; // x1
  UserItemMaster_o *v8; // x20
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  il2cpp_array_size_t v10; // w22
  il2cpp_array_size_t v11; // w8
  __int64 v12; // x24
  __int64 v13; // x8
  __int64 v14; // x24
  __int64 v15; // t1
  const MethodInfo *v16; // x4
  int32_t *v17; // x8
  struct EventInfoConquestItemCounterComponent_array *v18; // x9
  _DWORD *v19; // x10
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  Il2CppObject *MasterData_object; // x21
  struct EventInfoConquestItemCounterComponent_array *v24; // x8
  UserQuestMaster_o *v25; // x22
  il2cpp_array_size_t v26; // w27
  struct EventInfoConquestItemCounterComponent_array *v27; // x8
  EventInfoConquestItemCounterComponent_o *v28; // x8
  int64_t v29; // x24
  const MethodInfo *v30; // x4
  int v31; // w8
  int64_t v32; // x25
  __int64 v33; // x29
  int32_t v34; // w23
  int32_t *v35; // x21
  int32_t *v36; // x8
  struct EventInfoConquestItemCounterComponent_array *v37; // x9
  int32_t v38; // w1
  Il2CppObject *v39; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5BB09 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventConquestRewardMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&EventConquestInfo___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BB09 = 1;
  }
  v5 = sub_1B886EC(obj, EventConquestInfo___TypeInfo);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v8 = (UserItemMaster_o *)Instance;
  if ( v5 && *(_QWORD *)(v5 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v10 = 0;
      while ( (signed int)v10 < (signed int)conquestItems->max_length )
      {
        v11 = *(_DWORD *)(v5 + 24);
        if ( (int)v10 >= (int)v11 )
          break;
        if ( v10 >= v11 )
          goto LABEL_73;
        v12 = v5 + 8LL * (int)v10;
        v15 = *(_QWORD *)(v12 + 32);
        v14 = v12 + 32;
        v13 = v15;
        if ( !v15 )
          goto LABEL_71;
        if ( *(_DWORD *)(v13 + 16) == 2 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          if ( v10 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_73;
          if ( !*(_QWORD *)v14 || !v8 )
            goto LABEL_71;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v8, Instance, *(_DWORD *)(*(_QWORD *)v14 + 20LL), 0LL);
          if ( Instance )
          {
            if ( *(_DWORD *)(Instance + 24) == 1 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_71;
              v17 = (int32_t *)(Instance + 96);
            }
            else
            {
              v17 = (int32_t *)(Instance + 28);
            }
            v18 = this->fields.conquestItems;
            if ( !v18 )
              goto LABEL_71;
            if ( v10 >= v18->max_length || v10 >= *(_DWORD *)(v5 + 24) )
              goto LABEL_73;
            v19 = *(_DWORD **)v14;
            if ( !*(_QWORD *)v14 )
              goto LABEL_71;
            Instance = (int64_t)v18->m_Items[v10];
            if ( !Instance )
              goto LABEL_71;
            if ( *(_DWORD *)(Instance + 80) == v19[5] )
            {
              v20 = v19[8];
              v21 = v19[9];
              v22 = *v17;
              *(_DWORD *)(Instance + 88) = v21;
              *(_DWORD *)(Instance + 92) = v20;
              *(_DWORD *)(Instance + 84) = v22;
              EventInfoConquestItemCounterComponent__SetLabel(
                (EventInfoConquestItemCounterComponent_o *)Instance,
                v22,
                v20,
                v21,
                v16);
            }
          }
        }
        conquestItems = this->fields.conquestItems;
        ++v10;
        if ( !conquestItems )
          goto LABEL_71;
      }
      return;
    }
LABEL_71:
    sub_1B8880C(Instance, v7);
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v24 = this->fields.conquestItems;
  if ( !v24 )
    goto LABEL_71;
  v25 = (UserQuestMaster_o *)Instance;
  v26 = 0;
  v39 = MasterData_object;
  while ( (signed int)v26 < (signed int)v24->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v27 = this->fields.conquestItems;
    if ( !v27 )
      goto LABEL_71;
    if ( v26 >= v27->max_length )
      goto LABEL_73;
    v28 = v27->m_Items[v26];
    if ( !v28 || !v8 )
      goto LABEL_71;
    Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v8, Instance, v28->fields._itemId_k__BackingField, 0LL);
    if ( Instance )
    {
      if ( !MasterData_object )
        goto LABEL_71;
      v29 = Instance;
      Instance = (int64_t)EventConquestRewardMaster__getList(
                            (EventConquestRewardMaster_o *)MasterData_object,
                            this->fields.eventId,
                            0LL);
      if ( Instance )
      {
        v31 = *(_DWORD *)(Instance + 24);
        v32 = Instance;
        if ( v31 >= 1 )
        {
          v33 = 0LL;
          v34 = 0;
          while ( (unsigned int)v33 < v31 )
          {
            v35 = *(int32_t **)(v32 + 32 + 8 * v33);
            if ( !v35 )
              goto LABEL_71;
            if ( v35[6] == 2 && v35[7] == *(_DWORD *)(v29 + 24) )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager__get_UserId(0LL);
              if ( !v25 )
                goto LABEL_71;
              Instance = (int64_t)UserQuestMaster__getEntityFromId(v25, Instance, v35[5], 0LL);
              if ( !v35[5] || Instance && *(int *)(Instance + 40) >= 1 )
                v34 += v35[8];
            }
            v31 = *(_DWORD *)(v32 + 24);
            if ( (int)++v33 >= v31 )
              goto LABEL_62;
          }
LABEL_73:
          sub_1B88814(Instance, v7);
        }
      }
      v34 = 0;
LABEL_62:
      if ( *(_DWORD *)(v29 + 24) == 1 )
      {
        Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
        if ( !Instance )
          goto LABEL_71;
        v36 = (int32_t *)(Instance + 96);
      }
      else
      {
        v36 = (int32_t *)(v29 + 28);
      }
      v37 = this->fields.conquestItems;
      if ( !v37 )
        goto LABEL_71;
      if ( v26 >= v37->max_length )
        goto LABEL_73;
      Instance = (int64_t)v37->m_Items[v26];
      if ( !Instance )
        goto LABEL_71;
      v38 = *v36;
      *(_DWORD *)(Instance + 88) = 0;
      *(_DWORD *)(Instance + 92) = v34;
      *(_DWORD *)(Instance + 84) = v38;
      EventInfoConquestItemCounterComponent__SetLabel(
        (EventInfoConquestItemCounterComponent_o *)Instance,
        v38,
        v34,
        0,
        v30);
      MasterData_object = v39;
    }
    v24 = this->fields.conquestItems;
    ++v26;
    if ( !v24 )
      goto LABEL_71;
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
  if ( (byte_4A5BB08 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl_o *)sub_1B885B0(&int_TypeInfo);
    byte_4A5BB08 = 1;
  }
  if ( !val )
    sub_1B8880C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1B88ACC(val);
    EventInfoConquestItemCounterControl__SetConquestInfos(v6, v7, v8);
  }
}


void __fastcall EventInfoConquestItemCounterControl__Setup(
        EventInfoConquestItemCounterControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterControl___c_c *v5; // x0
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v7; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x0
  __int64 v13; // x1
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_Object_array *v15; // x20
  __int64 v16; // x27
  unsigned __int64 v17; // x28
  __int64 v18; // x21
  __int64 v19; // x8
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_object__bool__o *v21; // x24
  const MethodInfo *v22; // x3
  struct EventInfoConquestItemCounterComponent_array *v23; // x8
  EventInfoConquestItemCounterComponent_o *v24; // x8

  if ( (byte_4A5BB06 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_1B885B0(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
    sub_1B885B0(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1B885B0(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__);
    sub_1B885B0(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__);
    sub_1B885B0(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
    sub_1B885B0(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_4A5BB06 = 1;
  }
  if ( entity )
  {
    v5 = EventInfoConquestItemCounterControl___c_TypeInfo;
    if ( !EventInfoConquestItemCounterControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoConquestItemCounterControl___c_TypeInfo);
      v5 = EventInfoConquestItemCounterControl___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v5->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = EventInfoConquestItemCounterControl___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__7_0, v7, Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, 0LL);
      static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v9, v10);
    }
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v12 = System_Linq_Enumerable__ToArray_object_(
            v11,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_26:
      sub_1B8880C(v12, v13);
    v15 = v12;
    v16 = 4LL;
    while ( 1 )
    {
      v17 = v16 - 4;
      if ( v16 - 4 >= (int)conquestItems->max_length )
        break;
      v18 = sub_1B887FC(EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v18, 0LL);
      v12 = (System_Object_array *)System_Linq_Enumerable__Count_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                     (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v17 < (int)v12 )
      {
        if ( !v15 )
          goto LABEL_26;
        if ( v17 >= v15->max_length )
          goto LABEL_28;
        v19 = *((_QWORD *)&v15->obj.klass + v16);
        if ( !v19 )
          goto LABEL_26;
        if ( *(_DWORD *)(v19 + 20) == 1 )
        {
          if ( !v18 )
            goto LABEL_26;
          v12 = (System_Object_array *)System_Int32__TryParse(
                                         *(System_String_o **)(v19 + 24),
                                         (int32_t *)(v18 + 16),
                                         0LL);
          if ( ((unsigned __int8)v12 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            v21 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v21,
              (Il2CppObject *)v18,
              Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
              0LL);
            v12 = (System_Object_array *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                           (System_Func_TSource__bool__o *)v21,
                                           (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
            if ( v12 )
            {
              v23 = this->fields.conquestItems;
              if ( !v23 )
                goto LABEL_26;
              if ( v17 >= v23->max_length )
LABEL_28:
                sub_1B88814(v12, v13);
              v24 = (EventInfoConquestItemCounterComponent_o *)*((_QWORD *)&v23->obj.klass + v16);
              if ( !v24 )
                goto LABEL_26;
              EventInfoConquestItemCounterComponent__SetItem(
                v24,
                *(_DWORD *)(v18 + 16),
                *(System_String_o **)&v12->max_length,
                v22);
            }
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v16;
      if ( !conquestItems )
        goto LABEL_26;
    }
  }
}


void __fastcall EventInfoConquestItemCounterControl__Start(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *crestSprite; // x20
  UISprite_o *v4; // x20
  UILabel_o *armamentLabel; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5BB05 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16904/*"armaments_title"*/);
    sub_1B885B0(&StringLiteral_5585/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/);
    byte_4A5BB05 = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0LL, 0LL) )
  {
    v4 = this->fields.crestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v4, (System_String_o *)StringLiteral_16904/*"armaments_title"*/, 0LL);
  }
  armamentLabel = this->fields.armamentLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5585/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0LL);
  if ( !armamentLabel )
    sub_1B8880C(v6, v7);
  UILabel__set_text(armamentLabel, v6, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EventInfoConquestItemCounterControl__playAnim(
        EventInfoConquestItemCounterControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5BB07 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
    byte_4A5BB07 = 1;
  }
  v5 = sub_1B887FC(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BB0B & 1) == 0 )
  {
    sub_1B885B0(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_4A5BB0B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoConquestItemCounterControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoConquestItemCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoConquestItemCounterControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterControl_o *_4__this; // x20
  EventInfoConquestItemCounterControl__playAnim_d__9_o *v6; // x19
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x21
  int max_length; // w8
  unsigned int v9; // w22
  struct EventInfoConquestItemCounterComponent_array *v10; // x8
  int32_t i_5__2; // w9
  signed int v12; // w10
  EventInfoConquestItemCounterComponent_o *v13; // x11
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v6 = this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    conquestItems = _4__this->fields.conquestItems;
    if ( !conquestItems )
      goto LABEL_22;
    max_length = conquestItems->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
LABEL_23:
          sub_1B88814(this, method);
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)conquestItems->m_Items[v9];
        if ( !this )
          break;
        EventInfoConquestItemCounterComponent__PlayAnim((EventInfoConquestItemCounterComponent_o *)this, method);
        max_length = conquestItems->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_10;
      }
LABEL_22:
      sub_1B8880C(this, method);
    }
LABEL_10:
    v6->fields._i_5__2 = 0;
  }
  if ( !_4__this )
    goto LABEL_22;
  v10 = _4__this->fields.conquestItems;
  if ( !v10 )
    goto LABEL_22;
  i_5__2 = v6->fields._i_5__2;
  v12 = v10->max_length;
  if ( i_5__2 >= v12 )
  {
LABEL_19:
    ActionExtensions__Call(v6->fields.callback, 0LL);
    return 0;
  }
  while ( 1 )
  {
    if ( i_5__2 >= (unsigned int)v12 )
      goto LABEL_23;
    v13 = v10->m_Items[i_5__2];
    if ( !v13 )
      goto LABEL_22;
    if ( v13->fields.addProductNum )
      break;
    v6->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 >= v12 )
      goto LABEL_19;
  }
  v6->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v6->fields.__2__current;
  sub_1B88554(p__2__current, 0, v2, v3);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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