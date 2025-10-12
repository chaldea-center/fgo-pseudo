void EventInfoConquestItemCounterControl___ctor(EventInfoConquestItemCounterControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C37DD5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
    byte_4C37DD5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemSprites, (int32_t)v3, v4, v5);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoConquestItemCounterControl__PlayAnim(
        EventInfoConquestItemCounterControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  if ( this->fields.playType == type && this->fields.conquestItems )
  {
    v5 = EventInfoConquestItemCounterControl__playAnim(this, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v5, 0);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


void EventInfoConquestItemCounterControl__SetConquestInfos(
        EventInfoConquestItemCounterControl_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v5; // x22
  EventInfoConquestItemCounterComponent_o *Instance; // x0
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  unsigned int v8; // w23
  unsigned int v9; // w8
  __int64 v10; // x26
  __int64 v11; // x8
  __int64 v12; // x26
  __int64 v13; // t1
  int64_t m_CancellationTokenSource_high; // x1
  struct EventInfoConquestItemCounterComponent_array *v15; // x8
  _DWORD *v16; // x9
  int32_t v17; // w2
  int32_t v18; // w3
  EventInfoConquestItemCounterComponent_c *klass; // x8
  Il2CppObject *MasterData_object; // x21
  struct EventInfoConquestItemCounterComponent_array *v21; // x8
  UserItemMaster_o *v22; // x19
  UserQuestMaster_o *v23; // x23
  unsigned int v24; // w27
  struct EventInfoConquestItemCounterComponent_array *v25; // x8
  EventInfoConquestItemCounterComponent_o *v26; // x8
  EventInfoConquestItemCounterComponent_o *v27; // x25
  int m_CancellationTokenSource; // w8
  EventInfoConquestItemCounterComponent_o *v29; // x26
  __int64 v30; // x22
  int32_t v31; // w24
  int32_t *v32; // x19
  int64_t v33; // x1
  struct EventInfoConquestItemCounterComponent_array *v34; // x8
  EventInfoConquestItemCounterComponent_c *v35; // x8
  Il2CppObject *v36; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v37; // [xsp+10h] [xbp-70h]
  EventInfoConquestItemCounterControl_o *v38; // [xsp+18h] [xbp-68h]

  if ( (byte_4C37DD4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventConquestRewardMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&EventConquestInfo___TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37DD4 = 1;
  }
  v5 = sub_1C32D5C(obj, EventConquestInfo___TypeInfo);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v37 = (UserItemMaster_o *)Instance;
  v38 = this;
  if ( v5 && *(_QWORD *)(v5 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v8 = 0;
      while ( (signed int)v8 < SLODWORD(conquestItems->max_length) )
      {
        v9 = *(_DWORD *)(v5 + 24);
        if ( (int)v8 >= (int)v9 )
          break;
        if ( v8 >= v9 )
          goto LABEL_85;
        v10 = v5 + 8LL * (int)v8;
        v13 = *(_QWORD *)(v10 + 32);
        v12 = v10 + 32;
        v11 = v13;
        if ( !v13 )
          goto LABEL_83;
        if ( *(_DWORD *)(v11 + 16) == 2 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C31812 )
          {
            sub_1C32C20(&NetworkManager_TypeInfo);
            byte_4C31812 = 1;
          }
          Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          }
          if ( v8 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_85;
          if ( !*(_QWORD *)v12 || !v37 )
            goto LABEL_83;
          Instance = (EventInfoConquestItemCounterComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                                  v37,
                                                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._itemId_k__BackingField
                                                                            + 64LL),
                                                                  *(_DWORD *)(*(_QWORD *)v12 + 20LL),
                                                                  0);
          if ( Instance )
          {
            if ( LODWORD(Instance->fields.m_CancellationTokenSource) == 1 )
            {
              Instance = (EventInfoConquestItemCounterComponent_o *)UserGameMaster__getSelfUserGame(0);
              if ( !Instance )
                goto LABEL_83;
              m_CancellationTokenSource_high = *(_QWORD *)&Instance->fields.addProductNum;
            }
            else
            {
              m_CancellationTokenSource_high = SHIDWORD(Instance->fields.m_CancellationTokenSource);
            }
            v15 = v38->fields.conquestItems;
            if ( !v15 )
              goto LABEL_83;
            if ( v8 >= LODWORD(v15->max_length) || v8 >= *(_DWORD *)(v5 + 24) )
              goto LABEL_85;
            v16 = *(_DWORD **)v12;
            if ( !*(_QWORD *)v12 )
              goto LABEL_83;
            Instance = v15->m_Items[v8];
            if ( !Instance )
              goto LABEL_83;
            if ( Instance->fields._itemId_k__BackingField == v16[5] )
            {
              v17 = v16[8];
              v18 = v16[9];
              klass = Instance->klass;
              Instance->fields.itemNum = m_CancellationTokenSource_high;
              Instance->fields.addProductNum = v18;
              Instance->fields.productNum = v17;
              Instance = (EventInfoConquestItemCounterComponent_o *)((__int64 (*)(void))klass->vtable._5_SetLabel.methodPtr)();
            }
          }
        }
        ++v8;
        conquestItems = v38->fields.conquestItems;
        if ( !conquestItems )
          goto LABEL_83;
      }
      return;
    }
LABEL_83:
    sub_1C32E7C(Instance);
  }
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v21 = this->fields.conquestItems;
  v22 = v37;
  if ( !v21 )
    goto LABEL_83;
  v23 = (UserQuestMaster_o *)Instance;
  v24 = 0;
  v36 = MasterData_object;
  while ( (signed int)v24 < SLODWORD(v21->max_length) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
    }
    v25 = this->fields.conquestItems;
    if ( !v25 )
      goto LABEL_83;
    if ( v24 >= LODWORD(v25->max_length) )
      goto LABEL_85;
    v26 = v25->m_Items[v24];
    if ( !v26 || !v22 )
      goto LABEL_83;
    Instance = (EventInfoConquestItemCounterComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                            v22,
                                                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._itemId_k__BackingField
                                                                      + 64LL),
                                                            v26->fields._itemId_k__BackingField,
                                                            0);
    if ( Instance )
    {
      if ( !MasterData_object )
        goto LABEL_83;
      v27 = Instance;
      Instance = (EventInfoConquestItemCounterComponent_o *)EventConquestRewardMaster__getList(
                                                              (EventConquestRewardMaster_o *)MasterData_object,
                                                              this->fields.eventId,
                                                              0);
      if ( Instance )
      {
        m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
        v29 = Instance;
        if ( m_CancellationTokenSource >= 1 )
        {
          v30 = 0;
          v31 = 0;
          while ( (unsigned int)v30 < m_CancellationTokenSource )
          {
            v32 = (int32_t *)*((_QWORD *)&v29->fields.baseSprite + v30);
            if ( !v32 )
              goto LABEL_83;
            if ( v32[6] == 2 && v32[7] == LODWORD(v27->fields.m_CancellationTokenSource) )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C31812 )
              {
                sub_1C32C20(&NetworkManager_TypeInfo);
                byte_4C31812 = 1;
              }
              Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
              }
              if ( !v23 )
                goto LABEL_83;
              Instance = (EventInfoConquestItemCounterComponent_o *)UserQuestMaster__getEntityFromId(
                                                                      v23,
                                                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._itemId_k__BackingField
                                                                                + 64LL),
                                                                      v32[5],
                                                                      0);
              if ( !v32[5] || Instance && SLODWORD(Instance->fields.itemNumTitleLabel) >= 1 )
                v31 += v32[8];
            }
            m_CancellationTokenSource = (int)v29->fields.m_CancellationTokenSource;
            if ( (int)++v30 >= m_CancellationTokenSource )
              goto LABEL_74;
          }
LABEL_85:
          sub_1C32E84(Instance);
        }
      }
      v31 = 0;
LABEL_74:
      if ( LODWORD(v27->fields.m_CancellationTokenSource) == 1 )
      {
        Instance = (EventInfoConquestItemCounterComponent_o *)UserGameMaster__getSelfUserGame(0);
        this = v38;
        if ( !Instance )
          goto LABEL_83;
        v33 = *(_QWORD *)&Instance->fields.addProductNum;
      }
      else
      {
        v33 = SHIDWORD(v27->fields.m_CancellationTokenSource);
        this = v38;
      }
      v22 = v37;
      v34 = this->fields.conquestItems;
      if ( !v34 )
        goto LABEL_83;
      if ( v24 >= LODWORD(v34->max_length) )
        goto LABEL_85;
      Instance = v34->m_Items[v24];
      if ( !Instance )
        goto LABEL_83;
      v35 = Instance->klass;
      Instance->fields.itemNum = v33;
      Instance->fields.addProductNum = 0;
      Instance->fields.productNum = v31;
      Instance = (EventInfoConquestItemCounterComponent_o *)((__int64 (*)(void))v35->vtable._5_SetLabel.methodPtr)();
      MasterData_object = v36;
    }
    v21 = this->fields.conquestItems;
    ++v24;
    if ( !v21 )
      goto LABEL_83;
  }
}


void EventInfoConquestItemCounterControl__SetEventId(
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
  if ( (byte_4C37DD3 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl_o *)sub_1C32C20(&int_TypeInfo);
    byte_4C37DD3 = 1;
  }
  if ( !val )
    sub_1C32E7C(this);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1C3313C(val);
    EventInfoConquestItemCounterControl__SetConquestInfos(v6, v7, v8);
  }
}


void EventInfoConquestItemCounterControl__Setup(
        EventInfoConquestItemCounterControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterControl___c_c *v5; // x0
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v7; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x0
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_Object_array *v14; // x20
  __int64 v15; // x27
  unsigned __int64 v16; // x28
  EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *v17; // x21
  __int64 v18; // x8
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_object__bool__o *v21; // x24
  EventInfoConquestItemCounterControl_ItemSpriteData_o *v22; // x2
  struct EventInfoConquestItemCounterComponent_array *v23; // x8

  if ( (byte_4C37DD1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_1C32C20(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
    sub_1C32C20(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1C32C20(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__);
    sub_1C32C20(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__);
    sub_1C32C20(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
    sub_1C32C20(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_4C37DD1 = 1;
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
      _9__7_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__7_0, v7, Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, 0);
      static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v9, v10);
    }
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v12 = System_Linq_Enumerable__ToArray_object_(
            v11,
            (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_28:
      sub_1C32E7C(v12);
    v14 = v12;
    v15 = 4;
    while ( 1 )
    {
      v16 = v15 - 4;
      if ( v15 - 4 >= SLODWORD(conquestItems->max_length) )
        break;
      v17 = (EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *)sub_1C32E6C(EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
      EventInfoConquestItemCounterControl___c__DisplayClass7_0___ctor(v17, 0);
      v12 = (System_Object_array *)System_Linq_Enumerable__Count_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                     (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v16 < (int)v12 )
      {
        if ( !v14 )
          goto LABEL_28;
        if ( v16 >= LODWORD(v14->max_length) )
LABEL_30:
          sub_1C32E84(v12);
        v18 = *((_QWORD *)&v14->obj.klass + v15);
        if ( !v18 )
          goto LABEL_28;
        if ( *(_DWORD *)(v18 + 20) == 1 )
        {
          if ( !v17 )
            goto LABEL_28;
          v12 = (System_Object_array *)System_Int32__TryParse(*(System_String_o **)(v18 + 24), &v17->fields.itemId, 0);
          if ( ((unsigned __int8)v12 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            if ( itemSprites )
            {
              v21 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v21,
                (Il2CppObject *)v17,
                Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
                0);
              v12 = (System_Object_array *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                             (System_Func_TSource__bool__o *)v21,
                                             (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
              v22 = (EventInfoConquestItemCounterControl_ItemSpriteData_o *)v12;
            }
            else
            {
              v22 = 0;
            }
            v23 = this->fields.conquestItems;
            if ( !v23 )
              goto LABEL_28;
            if ( v16 >= LODWORD(v23->max_length) )
              goto LABEL_30;
            v12 = (System_Object_array *)*((_QWORD *)&v23->obj.klass + v15);
            if ( !v12 )
              goto LABEL_28;
            EventInfoConquestItemCounterComponent__SetItem(
              (EventInfoConquestItemCounterComponent_o *)v12,
              v17->fields.itemId,
              v22,
              v19);
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v15;
      if ( !conquestItems )
        goto LABEL_28;
    }
  }
}


void EventInfoConquestItemCounterControl__Start(EventInfoConquestItemCounterControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *crestSprite; // x20
  UISprite_o *v4; // x20
  UnityEngine_Object_o *armamentLabel; // x20
  UILabel_o *v6; // x19
  System_String_o *v7; // x0

  if ( (byte_4C37DD0 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_16882/*"armaments_title"*/);
    sub_1C32C20(&StringLiteral_5560/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/);
    byte_4C37DD0 = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0, 0) )
  {
    v4 = this->fields.crestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v4, (System_String_o *)StringLiteral_16882/*"armaments_title"*/, 0);
  }
  armamentLabel = (UnityEngine_Object_o *)this->fields.armamentLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(armamentLabel, 0, 0) )
  {
    v6 = this->fields.armamentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0);
    if ( !v6 )
      sub_1C32E7C(v7);
    UILabel__set_text(v6, v7, 0);
  }
}


System_Collections_IEnumerator_o *EventInfoConquestItemCounterControl__playAnim(
        EventInfoConquestItemCounterControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C37DD2 & 1) == 0 )
  {
    sub_1C32C20(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
    byte_4C37DD2 = 1;
  }
  v5 = sub_1C32E6C(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
  EventInfoConquestItemCounterControl__playAnim_d__9___ctor(
    (EventInfoConquestItemCounterControl__playAnim_d__9_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void EventInfoConquestItemCounterControl_ItemSpriteData___ctor(
        EventInfoConquestItemCounterControl_ItemSpriteData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoConquestItemCounterControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38E98 & 1) == 0 )
  {
    sub_1C32C20(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_4C38E98 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventInfoConquestItemCounterControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoConquestItemCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)EventInfoConquestItemCounterControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void EventInfoConquestItemCounterControl___c___ctor(
        EventInfoConquestItemCounterControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoConquestItemCounterControl___c___Setup_b__7_0(
        EventInfoConquestItemCounterControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C32E7C(this);
  return ent->fields.priority;
}


void EventInfoConquestItemCounterControl___c__DisplayClass7_0___ctor(
        EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoConquestItemCounterControl___c__DisplayClass7_0___Setup_b__1(
        EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *this,
        EventInfoConquestItemCounterControl_ItemSpriteData_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C32E7C(this);
  return item->fields.itemId == this->fields.itemId;
}


void EventInfoConquestItemCounterControl__playAnim_d__9___ctor(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoConquestItemCounterControl__playAnim_d__9__MoveNext(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterControl_o *_4__this; // x20
  EventInfoConquestItemCounterControl__playAnim_d__9_o *v4; // x19
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x21
  int max_length; // w8
  unsigned int v7; // w22
  struct EventInfoConquestItemCounterComponent_array *v8; // x8
  int i_5__2; // w9
  int v10; // w10
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v4 = this;
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
      goto LABEL_20;
    conquestItems = _4__this->fields.conquestItems;
    if ( !conquestItems )
      goto LABEL_20;
    max_length = conquestItems->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
LABEL_24:
          sub_1C32E84(this);
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)conquestItems->m_Items[v7];
        if ( !this )
          break;
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)((__int64 (__fastcall *)(EventInfoConquestItemCounterControl__playAnim_d__9_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                         this,
                                                                         this->klass->vtable._6_MoveNext.method);
        max_length = conquestItems->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_10;
      }
LABEL_20:
      sub_1C32E7C(this);
    }
LABEL_10:
    v4->fields._i_5__2 = 0;
  }
  if ( !_4__this )
    goto LABEL_20;
  v8 = _4__this->fields.conquestItems;
  if ( !v8 )
    goto LABEL_20;
  i_5__2 = v4->fields._i_5__2;
  while ( 1 )
  {
    v10 = v8->max_length;
    if ( i_5__2 >= v10 )
    {
      ActionExtensions__Call(v4->fields.callback, 0);
      return 0;
    }
    if ( i_5__2 >= (unsigned int)v10 )
      goto LABEL_24;
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)v8->m_Items[i_5__2];
    if ( !this )
      goto LABEL_20;
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)EventInfoConquestItemCounterComponent__get_IsAnimFinished(
                                                                     (EventInfoConquestItemCounterComponent_o *)this,
                                                                     0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    i_5__2 = v4->fields._i_5__2 + 1;
    v4->fields._i_5__2 = i_5__2;
    v8 = _4__this->fields.conquestItems;
    if ( !v8 )
      goto LABEL_20;
  }
  v4->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C32BC4(p__2__current, 0, v11, v12);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *EventInfoConquestItemCounterControl__playAnim_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoConquestItemCounterControl__playAnim_d__9__System_Collections_IEnumerator_Reset(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *EventInfoConquestItemCounterControl__playAnim_d__9__System_Collections_IEnumerator_get_Current(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoConquestItemCounterControl__playAnim_d__9__System_IDisposable_Dispose(
        EventInfoConquestItemCounterControl__playAnim_d__9_o *this,
        const MethodInfo *method)
{
  ;
}