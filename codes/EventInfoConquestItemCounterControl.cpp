void EventInfoConquestItemCounterControl___ctor(EventInfoConquestItemCounterControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971C8D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
    byte_5971C8D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData___ctor__);
  this->fields.itemSprites = (struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemSprites, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v5, 0);
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
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  unsigned int v9; // w23
  unsigned int v10; // w8
  __int64 v11; // x26
  __int64 v12; // x8
  __int64 v13; // x26
  __int64 v14; // t1
  struct EventInfoConquestItemCounterComponent_array *v15; // x9
  _DWORD *v16; // x8
  EventInfoConquestItemCounterComponent_c *klass; // x9
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 (*methodPtr)(void); // x8
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
  __int64 (*v36)(void); // x9
  Il2CppObject *v37; // [xsp+8h] [xbp-78h]
  UserItemMaster_o *v38; // [xsp+10h] [xbp-70h]
  EventInfoConquestItemCounterControl_o *v39; // [xsp+18h] [xbp-68h]

  if ( (byte_5971C8C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventConquestRewardMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&EventConquestInfo___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971C8C = 1;
  }
  v5 = sub_2213BB4(obj, EventConquestInfo___TypeInfo);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  v38 = (UserItemMaster_o *)Instance;
  v39 = this;
  if ( v5 && *(_QWORD *)(v5 + 24) )
  {
    conquestItems = this->fields.conquestItems;
    if ( conquestItems )
    {
      v9 = 0;
      while ( (signed int)v9 < SLODWORD(conquestItems->max_length) )
      {
        v10 = *(_DWORD *)(v5 + 24);
        if ( (int)v9 >= (int)v10 )
          break;
        if ( v9 >= v10 )
          goto LABEL_85;
        v11 = v5 + 8LL * (int)v9;
        v14 = *(_QWORD *)(v11 + 32);
        v13 = v11 + 32;
        v12 = v14;
        if ( !v14 )
          goto LABEL_83;
        if ( *(_DWORD *)(v12 + 16) == 2 )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, m_CancellationTokenSource_high);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, m_CancellationTokenSource_high);
            Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
          }
          if ( v9 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_85;
          if ( !*(_QWORD *)v13 || !v38 )
            goto LABEL_83;
          Instance = (EventInfoConquestItemCounterComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                                  v38,
                                                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._itemId_k__BackingField
                                                                            + 64LL),
                                                                  *(_DWORD *)(*(_QWORD *)v13 + 20LL),
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
            v15 = v39->fields.conquestItems;
            if ( !v15 )
              goto LABEL_83;
            if ( v9 >= LODWORD(v15->max_length) || v9 >= *(_DWORD *)(v5 + 24) )
              goto LABEL_85;
            v16 = *(_DWORD **)v13;
            if ( !*(_QWORD *)v13 )
              goto LABEL_83;
            Instance = v15->m_Items[v9];
            if ( !Instance )
              goto LABEL_83;
            if ( Instance->fields._itemId_k__BackingField == v16[5] )
            {
              klass = Instance->klass;
              Instance->fields.itemNum = m_CancellationTokenSource_high;
              v18 = v16[8];
              v19 = v16[9];
              methodPtr = (__int64 (*)(void))klass->vtable._5_SetLabel.methodPtr;
              Instance->fields.addProductNum = v19;
              Instance->fields.productNum = v18;
              Instance = (EventInfoConquestItemCounterComponent_o *)methodPtr();
            }
          }
        }
        ++v9;
        conquestItems = v39->fields.conquestItems;
        if ( !conquestItems )
          goto LABEL_83;
      }
      return;
    }
LABEL_83:
    sub_2213CDC(Instance, m_CancellationTokenSource_high);
  }
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventConquestRewardMaster___);
  Instance = (EventInfoConquestItemCounterComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (EventInfoConquestItemCounterComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v22 = this->fields.conquestItems;
  v23 = v38;
  if ( !v22 )
    goto LABEL_83;
  v24 = (UserQuestMaster_o *)Instance;
  v25 = 0;
  v37 = MasterData_object;
  while ( (signed int)v25 < SLODWORD(v22->max_length) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, m_CancellationTokenSource_high);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, m_CancellationTokenSource_high);
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
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, m_CancellationTokenSource_high);
              if ( !byte_5969EF2 )
              {
                sub_2213A60(&NetworkManager_TypeInfo);
                byte_5969EF2 = 1;
              }
              Instance = (EventInfoConquestItemCounterComponent_o *)NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, m_CancellationTokenSource_high);
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
          sub_2213CE4(Instance);
        }
      }
      v32 = 0;
LABEL_74:
      if ( LODWORD(v28->fields.m_CancellationTokenSource) == 1 )
      {
        Instance = (EventInfoConquestItemCounterComponent_o *)UserGameMaster__getSelfUserGame(0);
        this = v39;
        if ( !Instance )
          goto LABEL_83;
        m_CancellationTokenSource_high = *(_QWORD *)&Instance->fields.addProductNum;
      }
      else
      {
        m_CancellationTokenSource_high = SHIDWORD(v28->fields.m_CancellationTokenSource);
        this = v39;
      }
      v23 = v38;
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
      v36 = (__int64 (*)(void))v35->vtable._5_SetLabel.methodPtr;
      Instance->fields.addProductNum = 0;
      Instance->fields.productNum = v32;
      Instance = (EventInfoConquestItemCounterComponent_o *)v36();
      MasterData_object = v37;
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
  EventInfoConquestItemCounterControl_o *v3; // x0
  Il2CppObject *v4; // x1
  const MethodInfo *v5; // x2

  if ( !val )
    sub_2213CDC(this, 0);
  if ( val->klass->_1.element_class == *(Il2CppClass **)(qword_5984348 + 64) )
  {
    this->fields.eventId = *(_DWORD *)j_il2cpp_object_unbox_0(val, val, method);
  }
  else
  {
    sub_221405C(val, qword_5984348, method);
    EventInfoConquestItemCounterControl__SetConquestInfos(v3, v4, v5);
  }
}


void EventInfoConquestItemCounterControl__Setup(
        EventInfoConquestItemCounterControl_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  EventInfoConquestItemCounterControl___c_c *v5; // x0
  struct EventInfoConquestItemCounterControl___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v8; // x22
  struct EventInfoConquestItemCounterControl___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x0
  __int64 v18; // x1
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x8
  System_Object_array *v20; // x20
  __int64 v21; // x29
  unsigned __int64 v22; // x26
  __int64 v23; // x21
  __int64 v24; // x8
  const MethodInfo *v25; // x3
  struct System_Collections_Generic_List_EventInfoConquestItemCounterControl_ItemSpriteData__o *itemSprites; // x22
  System_Func_object__bool__o *v27; // x23
  EventInfoConquestItemCounterControl_ItemSpriteData_o *v28; // x2
  struct EventInfoConquestItemCounterComponent_array *v29; // x8

  if ( (byte_5971C8A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_2213A60(&System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
    sub_2213A60(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_2213A60(&Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__);
    sub_2213A60(&Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__);
    sub_2213A60(&EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
    sub_2213A60(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_5971C8A = 1;
  }
  if ( entity )
  {
    v5 = EventInfoConquestItemCounterControl___c_TypeInfo;
    if ( !*(&EventInfoConquestItemCounterControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoConquestItemCounterControl___c_TypeInfo, entity);
      v5 = EventInfoConquestItemCounterControl___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__7_0 = (System_Func_object__int__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, entity);
        static_fields = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventUiValueEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__7_0, v8, Method_EventInfoConquestItemCounterControl___c__Setup_b__7_0__, 0);
      v9 = EventInfoConquestItemCounterControl___c_TypeInfo->static_fields;
      v9->__9__7_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__7_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__7_0, (int32_t)_9__7_0, v10, v11, v12, v13, v14, v15);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)entity,
                                                                 (System_Func_TSource__TKey__o *)_9__7_0,
                                                                 (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    v17 = System_Linq_Enumerable__ToArray_object_(
            v16,
            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    conquestItems = this->fields.conquestItems;
    if ( !conquestItems )
LABEL_28:
      sub_2213CDC(v17, v18);
    v20 = v17;
    v21 = 4;
    while ( 1 )
    {
      v22 = v21 - 4;
      if ( v21 - 4 >= SLODWORD(conquestItems->max_length) )
        break;
      v23 = sub_2213CCC(EventInfoConquestItemCounterControl___c__DisplayClass7_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0);
      v17 = (System_Object_array *)System_Linq_Enumerable__Count_object_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                     (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_EventUiValueEntity___);
      if ( (__int64)v22 < (int)v17 )
      {
        if ( !v20 )
          goto LABEL_28;
        if ( v22 >= LODWORD(v20->max_length) )
LABEL_30:
          sub_2213CE4(v17);
        v24 = *((_QWORD *)&v20->obj.klass + v21);
        if ( !v24 )
          goto LABEL_28;
        if ( *(_DWORD *)(v24 + 20) == 1 )
        {
          if ( !v23 )
            goto LABEL_28;
          v17 = (System_Object_array *)System_Int32__TryParse(*(System_String_o **)(v24 + 24), (int32_t *)(v23 + 16), 0);
          if ( ((unsigned __int8)v17 & 1) != 0 )
          {
            itemSprites = this->fields.itemSprites;
            if ( itemSprites )
            {
              v27 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventInfoConquestItemCounterControl_ItemSpriteData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v27,
                (Il2CppObject *)v23,
                Method_EventInfoConquestItemCounterControl___c__DisplayClass7_0__Setup_b__1__,
                0);
              v17 = (System_Object_array *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)itemSprites,
                                             (System_Func_TSource__bool__o *)v27,
                                             (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoConquestItemCounterControl_ItemSpriteData___);
              v28 = (EventInfoConquestItemCounterControl_ItemSpriteData_o *)v17;
            }
            else
            {
              v28 = 0;
            }
            v29 = this->fields.conquestItems;
            if ( !v29 )
              goto LABEL_28;
            if ( v22 >= LODWORD(v29->max_length) )
              goto LABEL_30;
            v17 = (System_Object_array *)*((_QWORD *)&v29->obj.klass + v21);
            if ( !v17 )
              goto LABEL_28;
            EventInfoConquestItemCounterComponent__SetItem(
              (EventInfoConquestItemCounterComponent_o *)v17,
              *(_DWORD *)(v23 + 16),
              v28,
              v25);
          }
        }
      }
      conquestItems = this->fields.conquestItems;
      ++v21;
      if ( !conquestItems )
        goto LABEL_28;
    }
  }
}


void EventInfoConquestItemCounterControl__Start(EventInfoConquestItemCounterControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *crestSprite; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x20
  UnityEngine_Object_o *armamentLabel; // x20
  __int64 v7; // x1
  UILabel_o *v8; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_5971C89 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17594/*"armaments_title"*/);
    sub_2213A60(&StringLiteral_5761/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/);
    byte_5971C89 = 1;
  }
  crestSprite = (UnityEngine_Object_o *)this->fields.crestSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(crestSprite, 0, 0) )
  {
    v5 = this->fields.crestSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
    AtlasManager__SetEventUI(v5, (System_String_o *)StringLiteral_17594/*"armaments_title"*/, 0);
  }
  armamentLabel = (UnityEngine_Object_o *)this->fields.armamentLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(armamentLabel, 0, 0) )
  {
    v8 = this->fields.armamentLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5761/*"EVENT_CONQUEST_ARMAMENT_LABEL"*/, 0);
    if ( !v8 )
      sub_2213CDC(v9, v10);
    UILabel__set_text(v8, v9, 0);
  }
}


System_Collections_IEnumerator_o *EventInfoConquestItemCounterControl__playAnim(
        EventInfoConquestItemCounterControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5971C8B & 1) == 0 )
  {
    sub_2213A60(&EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
    byte_5971C8B = 1;
  }
  v5 = sub_2213CCC(EventInfoConquestItemCounterControl__playAnim_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971C8E & 1) == 0 )
  {
    sub_2213A60(&EventInfoConquestItemCounterControl___c_TypeInfo);
    byte_5971C8E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoConquestItemCounterControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoConquestItemCounterControl___c_TypeInfo->static_fields->__9 = (struct EventInfoConquestItemCounterControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoConquestItemCounterControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct EventInfoConquestItemCounterControl_o *_4__this; // x20
  EventInfoConquestItemCounterControl__playAnim_d__9_o *v10; // x19
  struct EventInfoConquestItemCounterComponent_array *conquestItems; // x21
  int max_length; // w8
  __int64 v13; // x22
  int32_t i_5__2; // w8
  struct EventInfoConquestItemCounterComponent_array *v15; // x9
  signed int v16; // w11
  bool v17; // cc
  int32_t v18; // w10
  EventInfoConquestItemCounterComponent_o *v19; // x12
  MissionNaviTransitionBoardItem_o *p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v10 = this;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    conquestItems = _4__this->fields.conquestItems;
    if ( !conquestItems )
      goto LABEL_28;
    max_length = conquestItems->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
LABEL_29:
          sub_2213CE4(this);
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)conquestItems->m_Items[v13];
        if ( !this )
          break;
        this = (EventInfoConquestItemCounterControl__playAnim_d__9_o *)((__int64 (__fastcall *)(EventInfoConquestItemCounterControl__playAnim_d__9_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                         this,
                                                                         this->klass->vtable._6_MoveNext.method);
        max_length = conquestItems->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_10;
      }
LABEL_28:
      sub_2213CDC(this, method);
    }
LABEL_10:
    i_5__2 = 0;
    v10->fields._i_5__2 = 0;
  }
  if ( !_4__this )
    goto LABEL_28;
  v15 = _4__this->fields.conquestItems;
  if ( !v15 )
    goto LABEL_28;
  v16 = v15->max_length;
  v17 = i_5__2 < v16;
  if ( i_5__2 <= v16 )
    v18 = v15->max_length;
  else
    v18 = i_5__2;
  if ( i_5__2 > (unsigned int)v16 )
    v16 = i_5__2;
  if ( !v17 )
  {
LABEL_25:
    ActionExtensions__Call(v10->fields.callback, 0);
    return 0;
  }
  while ( 1 )
  {
    if ( v16 == i_5__2 )
      goto LABEL_29;
    v19 = v15->m_Items[i_5__2];
    if ( !v19 )
      goto LABEL_28;
    if ( v19->fields.addProductNum )
      break;
    v10->fields._i_5__2 = ++i_5__2;
    if ( v18 == i_5__2 )
      goto LABEL_25;
  }
  v10->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v10->fields.__2__current;
  sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_EventInfoConquestItemCounterControl__playAnim_d__9_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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