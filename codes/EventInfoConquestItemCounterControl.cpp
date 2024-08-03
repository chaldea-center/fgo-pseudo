void __fastcall EventInfoConquestItemCounterControl___ctor(
        EventInfoConquestItemCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FCF9E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__,
      method);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo, v4);
    byte_49FCF9E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemSprites, (int32_t)v5, v6, v7);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  int64_t Instance; // x0
  __int64 v12; // x1
  UserItemMaster_o *v13; // x20
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  il2cpp_array_size_t v15; // w22
  il2cpp_array_size_t v16; // w8
  __int64 v17; // x24
  __int64 v18; // x8
  __int64 v19; // x24
  __int64 v20; // t1
  const MethodInfo *v21; // x4
  int32_t *v22; // x8
  struct EventInfoConquestItemCounterComponent_array *v23; // x9
  _DWORD *v24; // x10
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  Il2CppObject *MasterData_object; // x21
  struct EventInfoConquestItemCounterComponent_array *v29; // x8
  UserQuestMaster_o *v30; // x22
  il2cpp_array_size_t v31; // w27
  struct EventInfoConquestItemCounterComponent_array *v32; // x8
  EventInfoConquestItemCounterComponent_o *v33; // x8
  int64_t v34; // x24
  const MethodInfo *v35; // x4
  int v36; // w8
  int64_t v37; // x25
  __int64 v38; // x29
  int32_t v39; // w23
  int32_t *v40; // x21
  int32_t *v41; // x8
  struct EventInfoConquestItemCounterComponent_array *v42; // x9
  int32_t v43; // w1
  Il2CppObject *v44; // [xsp+8h] [xbp-68h]

  if ( (byte_49FCF9D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventConquestRewardMaster___, obj);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1B640C8(&EventConquestInfo___TypeInfo, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FCF9D = 1;
  }
  v10 = sub_1B64204(obj, EventConquestInfo___TypeInfo);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  v13 = (UserItemMaster_o *)Instance;
  if ( v10 && *(_QWORD *)(v10 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v15 = 0;
      while ( (signed int)v15 < (signed int)conquestItems->max_length )
      {
        v16 = *(_DWORD *)(v10 + 24);
        if ( (int)v15 >= (int)v16 )
          break;
        if ( v15 >= v16 )
          goto LABEL_73;
        v17 = v10 + 8LL * (int)v15;
        v20 = *(_QWORD *)(v17 + 32);
        v19 = v17 + 32;
        v18 = v20;
        if ( !v20 )
          goto LABEL_71;
        if ( *(_DWORD *)(v18 + 16) == 2 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          if ( v15 >= *(_DWORD *)(v10 + 24) )
            goto LABEL_73;
          if ( !*(_QWORD *)v19 || !v13 )
            goto LABEL_71;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                v13,
                                Instance,
                                *(_DWORD *)(*(_QWORD *)v19 + 20LL),
                                0LL);
          if ( Instance )
          {
            if ( *(_DWORD *)(Instance + 24) == 1 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_71;
              v22 = (int32_t *)(Instance + 96);
            }
            else
            {
              v22 = (int32_t *)(Instance + 28);
            }
            v23 = this->fields.conquestItems;
            if ( !v23 )
              goto LABEL_71;
            if ( v15 >= v23->max_length || v15 >= *(_DWORD *)(v10 + 24) )
              goto LABEL_73;
            v24 = *(_DWORD **)v19;
            if ( !*(_QWORD *)v19 )
              goto LABEL_71;
            Instance = (int64_t)v23->m_Items[v15];
            if ( !Instance )
              goto LABEL_71;
            if ( *(_DWORD *)(Instance + 80) == v24[5] )
            {
              v25 = v24[8];
              v26 = v24[9];
              v27 = *v22;
              *(_DWORD *)(Instance + 88) = v26;
              *(_DWORD *)(Instance + 92) = v25;
              *(_DWORD *)(Instance + 84) = v27;
              EventInfoConquestItemCounterComponent__SetLabel(
                (EventInfoConquestItemCounterComponent_o *)Instance,
                v27,
                v25,
                v26,
                v21);
            }
          }
        }
        conquestItems = this->fields.conquestItems;
        ++v15;
        if ( !conquestItems )
          goto LABEL_71;
      }
      return;
    }
LABEL_71:
    sub_1B64324(Instance);
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v29 = this->fields.conquestItems;
  if ( !v29 )
    goto LABEL_71;
  v30 = (UserQuestMaster_o *)Instance;
  v31 = 0;
  v44 = MasterData_object;
  while ( (signed int)v31 < (signed int)v29->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v32 = this->fields.conquestItems;
    if ( !v32 )
      goto LABEL_71;
    if ( v31 >= v32->max_length )
      goto LABEL_73;
    v33 = v32->m_Items[v31];
    if ( !v33 || !v13 )
      goto LABEL_71;
    Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v13, Instance, v33->fields._itemId_k__BackingField, 0LL);
    if ( Instance )
    {
      if ( !MasterData_object )
        goto LABEL_71;
      v34 = Instance;
      Instance = (int64_t)EventConquestRewardMaster__getList(
                            (EventConquestRewardMaster_o *)MasterData_object,
                            this->fields.eventId,
                            0LL);
      if ( Instance )
      {
        v36 = *(_DWORD *)(Instance + 24);
        v37 = Instance;
        if ( v36 >= 1 )
        {
          v38 = 0LL;
          v39 = 0;
          while ( (unsigned int)v38 < v36 )
          {
            v40 = *(int32_t **)(v37 + 32 + 8 * v38);
            if ( !v40 )
              goto LABEL_71;
            if ( v40[6] == 2 && v40[7] == *(_DWORD *)(v34 + 24) )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager__get_UserId(0LL);
              if ( !v30 )
                goto LABEL_71;
              Instance = (int64_t)UserQuestMaster__getEntityFromId(v30, Instance, v40[5], 0LL);
              if ( !v40[5] || Instance && *(int *)(Instance + 40) >= 1 )
                v39 += v40[8];
            }
            v36 = *(_DWORD *)(v37 + 24);
            if ( (int)++v38 >= v36 )
              goto LABEL_62;
          }
LABEL_73:
          sub_1B6432C(Instance, v12);
        }
      }
      v39 = 0;
LABEL_62:
      if ( *(_DWORD *)(v34 + 24) == 1 )
      {
        Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
        if ( !Instance )
          goto LABEL_71;
        v41 = (int32_t *)(Instance + 96);
      }
      else
      {
        v41 = (int32_t *)(v34 + 28);
      }
      v42 = this->fields.conquestItems;
      if ( !v42 )
        goto LABEL_71;
      if ( v31 >= v42->max_length )
        goto LABEL_73;
      Instance = (int64_t)v42->m_Items[v31];
      if ( !Instance )
        goto LABEL_71;
      v43 = *v41;
      *(_DWORD *)(Instance + 88) = 0;
      *(_DWORD *)(Instance + 92) = v39;
      *(_DWORD *)(Instance + 84) = v43;
      EventInfoConquestItemCounterComponent__SetLabel(
        (EventInfoConquestItemCounterComponent_o *)Instance,
        v43,
        v39,
        0,
        v35);
      MasterData_object = v44;
    }
    v29 = this->fields.conquestItems;
    ++v31;
    if ( !v29 )
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
  if ( (byte_49FCF9C & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl_o *)sub_1B640C8(&int_TypeInfo, val);
    byte_49FCF9C = 1;
  }
  if ( !val )
    sub_1B64324(this);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1B645E4(val);
    EventInfoConquestItemCounterControl__SetConquestInfos(v6, v7, v8);
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
  EventInfoConquestItemCounterControl___c_c *v14; // x0
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v16; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_Object_array *v25; // x20
  __int64 v26; // x27
  unsigned __int64 v27; // x28
  __int64 v28; // x21
  __int64 v29; // x8
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_object__bool__o *v31; // x24
  const MethodInfo *v32; // x3
  struct EventInfoConquestItemCounterComponent_array *v33; // x8
  EventInfoConquestItemCounterComponent_o *v34; // x8

  if ( (byte_49FCF9A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___, entity);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v7);
    sub_1B640C8(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo, v8);
    sub_1B640C8(&System_Func_EventUiValueEntity__int__TypeInfo, v9);
    sub_1B640C8(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, v10);
    sub_1B640C8(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__, v11);
    sub_1B640C8(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo, v12);
    sub_1B640C8(&EventInfoConquestItemCounterControl___c_TypeInfo, v13);
    byte_49FCF9A = 1;
  }
  if ( entity )
  {
    v14 = EventInfoConquestItemCounterControl___c_TypeInfo;
    if ( !EventInfoConquestItemCounterControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoConquestItemCounterControl___c_TypeInfo);
      v14 = EventInfoConquestItemCounterControl___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v14->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = EventInfoConquestItemCounterControl___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventUiValueEntity__int__TypeInfo, entity, method);
      System_Func_object__int____ctor(_9__7_0, v16, Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, 0LL);
      static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v18, v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v21 = System_Linq_Enumerable__ToArray_object_(
            v20,
            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_26:
      sub_1B64324(v21);
    v25 = v21;
    v26 = 4LL;
    while ( 1 )
    {
      v27 = v26 - 4;
      if ( v26 - 4 >= (int)conquestItems->max_length )
        break;
      v28 = sub_1B64314(EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo, v22, v23);
      System_Object___ctor((Il2CppObject *)v28, 0LL);
      v21 = (System_Object_array *)System_Linq_Enumerable__Count_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                     (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v27 < (int)v21 )
      {
        if ( !v25 )
          goto LABEL_26;
        if ( v27 >= v25->max_length )
          goto LABEL_28;
        v29 = *((_QWORD *)&v25->obj.klass + v26);
        if ( !v29 )
          goto LABEL_26;
        if ( *(_DWORD *)(v29 + 20) == 1 )
        {
          if ( !v28 )
            goto LABEL_26;
          v21 = (System_Object_array *)System_Int32__TryParse(
                                         *(System_String_o **)(v29 + 24),
                                         (int32_t *)(v28 + 16),
                                         0LL);
          if ( ((unsigned __int8)v21 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            v31 = (System_Func_object__bool__o *)sub_1B64314(
                                                   System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo,
                                                   v22,
                                                   v23);
            System_Func_object__bool____ctor(
              v31,
              (Il2CppObject *)v28,
              Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
              0LL);
            v21 = (System_Object_array *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                           (System_Func_TSource__bool__o *)v31,
                                           (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
            if ( v21 )
            {
              v33 = this->fields.conquestItems;
              if ( !v33 )
                goto LABEL_26;
              if ( v27 >= v33->max_length )
LABEL_28:
                sub_1B6432C(v21, v22);
              v34 = (EventInfoConquestItemCounterComponent_o *)*((_QWORD *)&v33->obj.klass + v26);
              if ( !v34 )
                goto LABEL_26;
              EventInfoConquestItemCounterComponent__SetItem(
                v34,
                *(_DWORD *)(v28 + 16),
                *(System_String_o **)&v21->max_length,
                v32);
            }
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v26;
      if ( !conquestItems )
        goto LABEL_26;
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

  if ( (byte_49FCF99 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_16835/*"armaments_title"*/, v5);
    sub_1B640C8(&StringLiteral_5559/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, v6);
    byte_49FCF99 = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0LL, 0LL) )
  {
    v8 = this->fields.crestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_16835/*"armaments_title"*/, 0LL);
  }
  armamentLabel = this->fields.armamentLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5559/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0LL);
  if ( !armamentLabel )
    sub_1B64324(v10);
  UILabel__set_text(armamentLabel, v10, 0LL);
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

  if ( (byte_49FCF9B & 1) == 0 )
  {
    sub_1B640C8(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, callback);
    byte_49FCF9B = 1;
  }
  v5 = sub_1B64314(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCF9F & 1) == 0 )
  {
    sub_1B640C8(&EventInfoConquestItemCounterControl___c_TypeInfo, v1);
    byte_49FCF9F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoConquestItemCounterControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoConquestItemCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoConquestItemCounterControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  struct EventInfoConquestItemCounterComponent_array *v8; // x8
  int32_t i_5__2; // w9
  int32_t v10; // w10
  EventInfoConquestItemCounterComponent_o *v11; // x11
  bool result; // w0
  __int64 v13; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  int v17; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_49FCFA0 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)sub_1B640C8(&int_TypeInfo, method);
    byte_49FCFA0 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    conquestItems = _4__this->fields.conquestItems;
    if ( !conquestItems )
      goto LABEL_24;
    max_length = conquestItems->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
LABEL_25:
          sub_1B6432C(this, method);
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)conquestItems->m_Items[v7];
        if ( !this )
          break;
        EventInfoConquestItemCounterComponent__PlayAnim((EventInfoConquestItemCounterComponent_o *)this, method);
        max_length = conquestItems->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_12;
      }
LABEL_24:
      sub_1B64324(this);
    }
LABEL_12:
    v2->fields._i_5__2 = 0;
  }
  if ( !_4__this )
    goto LABEL_24;
  v8 = _4__this->fields.conquestItems;
  if ( !v8 )
    goto LABEL_24;
  i_5__2 = v2->fields._i_5__2;
  v10 = v8->max_length;
  if ( i_5__2 >= v10 )
  {
LABEL_21:
    ActionExtensions__Call(v2->fields.callback, 0LL);
    return 0;
  }
  while ( 1 )
  {
    if ( i_5__2 >= (unsigned int)v10 )
      goto LABEL_25;
    v11 = v8->m_Items[i_5__2];
    if ( !v11 )
      goto LABEL_24;
    if ( v11->fields.addProductNum )
      break;
    v2->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 >= v10 )
      goto LABEL_21;
  }
  v17 = 0;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v2->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(p__2__current, v13, v15, v16);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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