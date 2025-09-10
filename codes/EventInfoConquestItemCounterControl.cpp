void EventInfoConquestItemCounterControl___ctor(EventInfoConquestItemCounterControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2774B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
    byte_4C2774B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemSprites, (int32_t)v3, v4, v5);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v5, 0);
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
  int64_t m_CancellationTokenSource_high; // x1
  __int64 v8; // x2
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  unsigned int v10; // w23
  unsigned int v11; // w8
  __int64 v12; // x26
  __int64 v13; // x8
  __int64 v14; // x26
  __int64 v15; // t1
  struct EventInfoConquestItemCounterComponent_array *v16; // x8
  _DWORD *v17; // x9
  int32_t v18; // w2
  int32_t v19; // w3
  EventInfoConquestItemCounterComponent_c *klass; // x8
  Il2CppObject *MasterData_object; // x21
  struct EventInfoConquestItemCounterComponent_array *v22; // x8
  UserItemMaster_o *v23; // x19
  UserQuestMaster_o *v24; // x23
  unsigned int v25; // w27
  struct EventInfoConquestItemCounterComponent_array *v26; // x8
  EventInfoConquestItemCounterComponent_o *v27; // x8
  EventInfoConquestItemCounterComponent_o *v28; // x25
  int m_CancellationTokenSource; // w8
  EventInfoConquestItemCounterComponent_o *v30; // x26
  __int64 v31; // x22
  int32_t v32; // w24
  int32_t *v33; // x19
  struct EventInfoConquestItemCounterComponent_array *v34; // x8
  EventInfoConquestItemCounterComponent_c *v35; // x8
  Il2CppObject *v36; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v37; // [xsp+10h] [xbp-70h]
  EventInfoConquestItemCounterControl_o *v38; // [xsp+18h] [xbp-68h]

  if ( (byte_4C2774A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventConquestRewardMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&EventConquestInfo___TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2774A = 1;
  }
  v5 = sub_1C2D5CC(obj, EventConquestInfo___TypeInfo);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v37 = (UserItemMaster_o *)Instance;
  v38 = this;
  if ( v5 && *(_QWORD *)(v5 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v10 = 0;
      while ( (signed int)v10 < SLODWORD(conquestItems->max_length) )
      {
        v11 = *(_DWORD *)(v5 + 24);
        if ( (int)v10 >= (int)v11 )
          break;
        if ( v10 >= v11 )
          goto LABEL_85;
        v12 = v5 + 8LL * (int)v10;
        v15 = *(_QWORD *)(v12 + 32);
        v14 = v12 + 32;
        v13 = v15;
        if ( !v15 )
          goto LABEL_83;
        if ( *(_DWORD *)(v13 + 16) == 2 )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          }
          if ( v10 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_85;
          if ( !*(_QWORD *)v14 || !v37 )
            goto LABEL_83;
          Instance = (EventInfoConquestItemCounterComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                                  v37,
                                                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._itemId_k__BackingField
                                                                            + 64LL),
                                                                  *(_DWORD *)(*(_QWORD *)v14 + 20LL),
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
            v16 = v38->fields.conquestItems;
            if ( !v16 )
              goto LABEL_83;
            if ( v10 >= LODWORD(v16->max_length) || v10 >= *(_DWORD *)(v5 + 24) )
              goto LABEL_85;
            v17 = *(_DWORD **)v14;
            if ( !*(_QWORD *)v14 )
              goto LABEL_83;
            Instance = v16->m_Items[v10];
            if ( !Instance )
              goto LABEL_83;
            if ( Instance->fields._itemId_k__BackingField == v17[5] )
            {
              v18 = v17[8];
              v19 = v17[9];
              klass = Instance->klass;
              Instance->fields.itemNum = m_CancellationTokenSource_high;
              Instance->fields.addProductNum = v19;
              Instance->fields.productNum = v18;
              Instance = (EventInfoConquestItemCounterComponent_o *)((__int64 (*)(void))klass->vtable._5_SetLabel.methodPtr)();
            }
          }
        }
        ++v10;
        conquestItems = v38->fields.conquestItems;
        if ( !conquestItems )
          goto LABEL_83;
      }
      return;
    }
LABEL_83:
    sub_1C2D6EC(Instance, m_CancellationTokenSource_high);
  }
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v22 = this->fields.conquestItems;
  v23 = v37;
  if ( !v22 )
    goto LABEL_83;
  v24 = (UserQuestMaster_o *)Instance;
  v25 = 0;
  v36 = MasterData_object;
  while ( (signed int)v25 < SLODWORD(v22->max_length) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
    }
    v26 = this->fields.conquestItems;
    if ( !v26 )
      goto LABEL_83;
    if ( v25 >= LODWORD(v26->max_length) )
      goto LABEL_85;
    v27 = v26->m_Items[v25];
    if ( !v27 || !v23 )
      goto LABEL_83;
    Instance = (EventInfoConquestItemCounterComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                            v23,
                                                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._itemId_k__BackingField
                                                                      + 64LL),
                                                            v27->fields._itemId_k__BackingField,
                                                            0);
    if ( Instance )
    {
      if ( !MasterData_object )
        goto LABEL_83;
      v28 = Instance;
      Instance = (EventInfoConquestItemCounterComponent_o *)EventConquestRewardMaster__getList(
                                                              (EventConquestRewardMaster_o *)MasterData_object,
                                                              this->fields.eventId,
                                                              0);
      if ( Instance )
      {
        m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
        v30 = Instance;
        if ( m_CancellationTokenSource >= 1 )
        {
          v31 = 0;
          v32 = 0;
          while ( (unsigned int)v31 < m_CancellationTokenSource )
          {
            v33 = (int32_t *)*((_QWORD *)&v30->fields.baseSprite + v31);
            if ( !v33 )
              goto LABEL_83;
            if ( v33[6] == 2 && v33[7] == LODWORD(v28->fields.m_CancellationTokenSource) )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C211E1 )
              {
                sub_1C2D490(&NetworkManager_TypeInfo);
                byte_4C211E1 = 1;
              }
              Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
              }
              if ( !v24 )
                goto LABEL_83;
              Instance = (EventInfoConquestItemCounterComponent_o *)UserQuestMaster__getEntityFromId(
                                                                      v24,
                                                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._itemId_k__BackingField
                                                                                + 64LL),
                                                                      v33[5],
                                                                      0);
              if ( !v33[5] || Instance && SLODWORD(Instance->fields.itemNumTitleLabel) >= 1 )
                v32 += v33[8];
            }
            m_CancellationTokenSource = (int)v30->fields.m_CancellationTokenSource;
            if ( (int)++v31 >= m_CancellationTokenSource )
              goto LABEL_74;
          }
LABEL_85:
          sub_1C2D6F4(Instance, m_CancellationTokenSource_high, v8);
        }
      }
      v32 = 0;
LABEL_74:
      if ( LODWORD(v28->fields.m_CancellationTokenSource) == 1 )
      {
        Instance = (EventInfoConquestItemCounterComponent_o *)UserGameMaster__getSelfUserGame(0);
        this = v38;
        if ( !Instance )
          goto LABEL_83;
        m_CancellationTokenSource_high = *(_QWORD *)&Instance->fields.addProductNum;
      }
      else
      {
        m_CancellationTokenSource_high = SHIDWORD(v28->fields.m_CancellationTokenSource);
        this = v38;
      }
      v23 = v37;
      v34 = this->fields.conquestItems;
      if ( !v34 )
        goto LABEL_83;
      if ( v25 >= LODWORD(v34->max_length) )
        goto LABEL_85;
      Instance = v34->m_Items[v25];
      if ( !Instance )
        goto LABEL_83;
      v35 = Instance->klass;
      Instance->fields.itemNum = m_CancellationTokenSource_high;
      Instance->fields.addProductNum = 0;
      Instance->fields.productNum = v32;
      Instance = (EventInfoConquestItemCounterComponent_o *)((__int64 (*)(void))v35->vtable._5_SetLabel.methodPtr)();
      MasterData_object = v36;
    }
    v22 = this->fields.conquestItems;
    ++v25;
    if ( !v22 )
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
  if ( (byte_4C27749 & 1) == 0 )
  {
    this = (EventInfoConquestItemCounterControl_o *)sub_1C2D490(&int_TypeInfo);
    byte_4C27749 = 1;
  }
  if ( !val )
    sub_1C2D6EC(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
  }
  else
  {
    sub_1C2D9AC(val);
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
  __int64 v13; // x1
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_Object_array *v15; // x20
  __int64 v16; // x27
  unsigned __int64 v17; // x28
  EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *v18; // x21
  EventInfoConquestItemCounterControl_ItemSpriteData_o *v19; // x2
  __int64 v20; // x8
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x23
  System_Func_object__bool__o *v23; // x24
  struct EventInfoConquestItemCounterComponent_array *v24; // x8

  if ( (byte_4C27747 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_1C2D490(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
    sub_1C2D490(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1C2D490(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__);
    sub_1C2D490(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__);
    sub_1C2D490(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
    sub_1C2D490(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_4C27747 = 1;
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
      _9__7_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__7_0, v7, Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, 0);
      static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v9, v10);
    }
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v12 = System_Linq_Enumerable__ToArray_object_(
            v11,
            (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_28:
      sub_1C2D6EC(v12, v13);
    v15 = v12;
    v16 = 4;
    while ( 1 )
    {
      v17 = v16 - 4;
      if ( v16 - 4 >= SLODWORD(conquestItems->max_length) )
        break;
      v18 = (EventInfoConquestItemCounterControl___c__DisplayClass7_0_o *)sub_1C2D6DC(EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
      EventInfoConquestItemCounterControl___c__DisplayClass7_0___ctor(v18, 0);
      v12 = (System_Object_array *)System_Linq_Enumerable__Count_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                     (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v17 < (int)v12 )
      {
        if ( !v15 )
          goto LABEL_28;
        if ( v17 >= LODWORD(v15->max_length) )
LABEL_30:
          sub_1C2D6F4(v12, v13, v19);
        v20 = *((_QWORD *)&v15->obj.klass + v16);
        if ( !v20 )
          goto LABEL_28;
        if ( *(_DWORD *)(v20 + 20) == 1 )
        {
          if ( !v18 )
            goto LABEL_28;
          v12 = (System_Object_array *)System_Int32__TryParse(*(System_String_o **)(v20 + 24), &v18->fields.itemId, 0);
          if ( ((unsigned __int8)v12 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            if ( itemSprites )
            {
              v23 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v23,
                (Il2CppObject *)v18,
                Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
                0);
              v12 = (System_Object_array *)System_Linq_Enumerable__FirstOrDefault_object__51348472(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                             (System_Func_TSource__bool__o *)v23,
                                             (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
              v19 = (EventInfoConquestItemCounterControl_ItemSpriteData_o *)v12;
            }
            else
            {
              v19 = 0;
            }
            v24 = this->fields.conquestItems;
            if ( !v24 )
              goto LABEL_28;
            if ( v17 >= LODWORD(v24->max_length) )
              goto LABEL_30;
            v12 = (System_Object_array *)*((_QWORD *)&v24->obj.klass + v16);
            if ( !v12 )
              goto LABEL_28;
            EventInfoConquestItemCounterComponent__SetItem(
              (EventInfoConquestItemCounterComponent_o *)v12,
              v18->fields.itemId,
              v19,
              v21);
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v16;
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
  __int64 v8; // x1

  if ( (byte_4C27746 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16879/*"armaments_title"*/);
    sub_1C2D490(&StringLiteral_5552/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/);
    byte_4C27746 = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0, 0) )
  {
    v4 = this->fields.crestSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v4, (System_String_o *)StringLiteral_16879/*"armaments_title"*/, 0);
  }
  armamentLabel = (UnityEngine_Object_o *)this->fields.armamentLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(armamentLabel, 0, 0) )
  {
    v6 = this->fields.armamentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5552/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0);
    if ( !v6 )
      sub_1C2D6EC(v7, v8);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C27748 & 1) == 0 )
  {
    sub_1C2D490(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
    byte_4C27748 = 1;
  }
  v5 = sub_1C2D6DC(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
  EventInfoConquestItemCounterControl__playAnim_d__9___ctor(
    (EventInfoConquestItemCounterControl__playAnim_d__9_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v10, v11);
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

  if ( (byte_4C28793 & 1) == 0 )
  {
    sub_1C2D490(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_4C28793 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventInfoConquestItemCounterControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoConquestItemCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v1;
  sub_1C2D434(
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
  __int64 v2; // x2
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterControl_o *_4__this; // x20
  EventInfoConquestItemCounterControl__playAnim_d__9_o *v5; // x19
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x21
  int max_length; // w8
  unsigned int v8; // w22
  struct EventInfoConquestItemCounterComponent_array *v9; // x8
  int i_5__2; // w9
  int v11; // w10
  const MethodInfo *v12; // x3
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v5 = this;
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
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
LABEL_24:
          sub_1C2D6F4(this, method, v2);
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)conquestItems->m_Items[v8];
        if ( !this )
          break;
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)((__int64 (__fastcall *)(EventInfoConquestItemCounterControl__playAnim_d__9_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                         this,
                                                                         this->klass->vtable._6_MoveNext.method);
        max_length = conquestItems->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_10;
      }
LABEL_20:
      sub_1C2D6EC(this, method);
    }
LABEL_10:
    v5->fields._i_5__2 = 0;
  }
  if ( !_4__this )
    goto LABEL_20;
  v9 = _4__this->fields.conquestItems;
  if ( !v9 )
    goto LABEL_20;
  i_5__2 = v5->fields._i_5__2;
  while ( 1 )
  {
    v11 = v9->max_length;
    if ( i_5__2 >= v11 )
    {
      ActionExtensions__Call(v5->fields.callback, 0);
      return 0;
    }
    if ( i_5__2 >= (unsigned int)v11 )
      goto LABEL_24;
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)v9->m_Items[i_5__2];
    if ( !this )
      goto LABEL_20;
    this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)EventInfoConquestItemCounterComponent__get_IsAnimFinished(
                                                                     (EventInfoConquestItemCounterComponent_o *)this,
                                                                     0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    i_5__2 = v5->fields._i_5__2 + 1;
    v5->fields._i_5__2 = i_5__2;
    v9 = _4__this->fields.conquestItems;
    if ( !v9 )
      goto LABEL_20;
  }
  v5->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
  sub_1C2D434(p__2__current, 0, v2, v12);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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