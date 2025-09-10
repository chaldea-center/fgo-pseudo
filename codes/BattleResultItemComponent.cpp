void BattleResultItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct BattleResultItemComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct BattleResultItemComponent_StaticFields *v7; // x0
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2AB45 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultItemComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_20318/*"img_bg_total_dp"*/);
    sub_1C2D490(&StringLiteral_2841/*"BATTLE_RESULT_GET_EP"*/);
    sub_1C2D490(&StringLiteral_20319/*"img_bg_total_ep"*/);
    byte_4C2AB45 = 1;
  }
  BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20319/*"img_bg_total_ep"*/;
  sub_1C2D434((CGThumbnailListItem_o *)BattleResultItemComponent_TypeInfo->static_fields, StringLiteral_20319/*"img_bg_total_ep"*/, v1, v2);
  v3 = StringLiteral_20318/*"img_bg_total_dp"*/;
  static_fields = BattleResultItemComponent_TypeInfo->static_fields;
  static_fields->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20318/*"img_bg_total_dp"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->DP_SP_BASE_NAME, v3, v5, v6);
  v7 = BattleResultItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&v7->EP_GET_POSY_NORMAL = 3245342720LL;
  *(_QWORD *)&v7->EP_GET_FONT_NORMAL = 0x130000001ALL;
  v8 = StringLiteral_2841/*"BATTLE_RESULT_GET_EP"*/;
  v7->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2841/*"BATTLE_RESULT_GET_EP"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v7->EP_GET_LOCALE_KEY, v8, v9, v10);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2AB44 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Color___TypeInfo);
    byte_4C2AB44 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_1C2D538(UnityEngine_Color___TypeInfo, 2);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.showModeChanButtonLabelEffectColors, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v4; // x20
  int32_t v5; // w24
  int32_t v6; // w21
  BattleResultItemComponent_o *v7; // x22
  struct UILabel_o *getEventPointLabel; // x8
  int v9; // w9
  struct BattleViewItemlistComponent_o *v10; // x8
  int v11; // w20
  int v12; // w21
  float v13; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C2AB28 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattleResultItemComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AB28 = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_27;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)itemWindow->fields.itemObjectList;
    if ( !this )
      goto LABEL_27;
    if ( v6 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v6,
                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( this )
    {
      v7 = this;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v9 = BYTE5(getEventPointLabel->fields.mGo);
          itemWindow = v2->fields.itemWindow;
          if ( !v9 )
          {
            v5 = v6;
            v4 = (UnityEngine_Object_o *)v7;
          }
          ++v6;
          if ( itemWindow )
            continue;
        }
      }
    }
    goto LABEL_27;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
      if ( this )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        v10 = v2->fields.itemWindow;
        if ( v10 )
        {
          v11 = 0;
          v12 = v5 + 1;
          v13 = localPosition.fields.y + -113.57;
          do
          {
            this = (BattleResultItemComponent_o *)v10->fields.itemObjectList;
            if ( !this )
              break;
            if ( v12 + v11 >= SLODWORD(this->fields.m_CancellationTokenSource) )
              return;
            this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v12 + v11,
                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0);
            if ( !this )
              break;
            v15.fields.x = (float)((float)(v11 % 7) * 110.0) + -22.0;
            v15.fields.y = v13 + (float)((float)(v11 / 7) * -113.57);
            v15.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v15, 0);
            v10 = v2->fields.itemWindow;
            ++v11;
          }
          while ( v10 );
        }
      }
    }
LABEL_27:
    sub_1C2D6EC(this, method);
  }
}


void BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4C2AB3B & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultItemComponent_endClose__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C2AB3B = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0),
        !window) )
  {
    sub_1C2D6EC(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v5,
    window->klass->vtable._12_Close.method);
}


void BattleResultItemComponent__DialogCallBack(BattleResultItemComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C2AB31 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AB31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_1C2D6EC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultItemComponent__EndCloseDialogCallBack(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB32 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    byte_4C2AB32 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
}


int32_t BattleResultItemComponent__GetEventPointUpperPriority(
        BattleResultItemComponent_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w19
  __int64 v9; // x1
  int32_t key; // w29
  BattleResultItemComponent_o *v11; // x20
  const MethodInfo *v12; // x2
  _BOOL8 IsOpen; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  bool v17; // w21
  signed __int64 i; // x25
  _DWORD *v19; // x8
  int32_t v20; // w22
  int32_t v21; // w24
  int64_t v22; // x23
  int32_t v23; // w22
  int32_t v24; // w24
  int64_t v25; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C2AB41 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2AB41 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v7)) == 0) )
  {
    sub_1C2D6EC(Instance, v5);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v8 = 0;
  v28 = v27;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v28,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
  {
    if ( !v28.fields._current.fields.value )
      sub_1C2D6EC(0, v9);
    key = (int32_t)v28.fields._current.fields.key;
    v11 = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)v28.fields._current.fields.value,
                                           (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v11, (EventPointUpperReleaseEntity_array *)v11, v12);
    if ( !v11 )
      sub_1C2D6EC(IsOpen, v14);
    m_CancellationTokenSource = v11->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v17 = IsOpen;
      for ( i = 0; i < (int)m_CancellationTokenSource; ++i )
      {
        if ( i >= (unsigned __int64)(unsigned int)m_CancellationTokenSource )
          sub_1C2D6F4(IsOpen, v14, v15);
        v19 = (_DWORD *)*((_QWORD *)&v11->fields.parentComp + i);
        if ( v17 )
        {
          if ( !v19 )
            sub_1C2D6EC(IsOpen, v14);
          v21 = v19[9];
          v20 = v19[10];
          v22 = (int)v19[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v21, v20, v22, 0, 0, 0);
          if ( !IsOpen )
            goto LABEL_28;
        }
        else
        {
          if ( !v19 )
            sub_1C2D6EC(IsOpen, v14);
          v24 = v19[9];
          v23 = v19[10];
          v25 = (int)v19[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v24, v23, v25, 0, 0, 0);
          if ( IsOpen )
            break;
          if ( i >= LODWORD(v11->fields.m_CancellationTokenSource) - 1 )
            goto LABEL_28;
        }
        LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      }
    }
    if ( v8 < key )
      v8 = key;
  }
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v28,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  return v8;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  unsigned int v9; // w24
  EventPointUpperReleaseEntity_o *v10; // x21
  int32_t priority; // w22
  System_Collections_Generic_List_object__o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4C2AB42 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
    byte_4C2AB42 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_18;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C2D6F4(Item, v6, v7);
      v10 = entities->m_Items[v9];
      if ( !v10 || !v4 )
        break;
      priority = v10->fields.priority;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v4,
              priority,
              (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v12,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v4,
          priority,
          (Il2CppObject *)v12,
          (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v4,
                                                            priority,
                                                            (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v16 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v10,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v10, v13, v14);
      }
      max_length = entities->max_length;
      if ( (int)++v9 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
    }
LABEL_18:
    sub_1C2D6EC(Item, v6);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v4;
}


// local variable allocation has failed, the output may be wrong!
int64_t BattleResultItemComponent__GetEventPointUpperValue(
        BattleResultItemComponent_o *this,
        int32_t priority,
        EventPointUpperEntity_array *entities,
        const MethodInfo *method)
{
  int max_length; // w8
  int v7; // w9
  EventPointUpperEntity_o *v8; // x10
  BalanceConfig_c *v9; // x0

  if ( (byte_4C2AB43 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2AB43 = 1;
  }
  if ( !entities )
LABEL_15:
    sub_1C2D6EC(this, *(_QWORD *)&priority);
  max_length = entities->max_length;
  if ( max_length < 1 )
  {
LABEL_10:
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    return v9->static_fields->UserPointEventMax;
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( max_length == v7 )
        sub_1C2D6F4(this, *(_QWORD *)&priority, entities);
      v8 = entities->m_Items[v7];
      if ( !v8 )
        goto LABEL_15;
      if ( v8->fields.priority == priority )
        return v8->fields.value;
      if ( max_length == ++v7 )
        goto LABEL_10;
    }
  }
}


bool BattleResultItemComponent__GetIsAndCondGroup(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  int max_length; // w8
  int v4; // w9
  int v5; // w10
  EventPointUpperReleaseEntity_o *v6; // x11
  int32_t condGroup; // w11

  if ( !entities )
    goto LABEL_12;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    v5 = -1;
    while ( 1 )
    {
      if ( max_length == v4 )
        sub_1C2D6F4(this, entities, method);
      v6 = entities->m_Items[v4];
      if ( !v6 )
        break;
      condGroup = v6->fields.condGroup;
      if ( condGroup != v5 )
      {
        ++v4;
        v5 = condGroup;
        if ( max_length != v4 )
          continue;
      }
      return v4 < max_length;
    }
LABEL_12:
    sub_1C2D6EC(this, entities);
  }
  v4 = 0;
  return v4 < max_length;
}


bool BattleResultItemComponent__GetIsShowEventPointMax(
        BattleResultItemComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        int64_t userEventPoint,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v6; // x20
  const MethodInfo *v7; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultItemComponent_o *v9; // x21
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_4C2AB40 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointUpperMaster___);
    this = (BattleResultItemComponent_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2AB40 = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0);
  if ( !this )
    return (char)this;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  if ( !m_CancellationTokenSource )
  {
LABEL_12:
    LOBYTE(this) = 0;
    return (char)this;
  }
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1C2D6F4(this, eventDetailEntity, v7);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
LABEL_14:
    sub_1C2D6EC(this, eventDetailEntity);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             HIDWORD(parentComp->fields.m_CachedPtr),
                                                             v7);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v9,
                   v12) <= userEventPoint;
  return (char)this;
}


void BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *window; // x0
  System_String_o *v4; // x20

  if ( (byte_4C2AB21 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2834/*"BATTLE_RESULTITEM_TITLECONF"*/);
    byte_4C2AB21 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0);
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))window->klass->vtable._9_setClose.methodPtr)(
    window,
    window->klass->vtable._9_setClose.method);
  window = (BattleWindowComponent_o *)this->fields.itemDialog;
  if ( !window )
    goto LABEL_14;
  ItemDetailInfoComponent__Init((ItemDetailInfoComponent_o *)window, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2834/*"BATTLE_RESULTITEM_TITLECONF"*/, 0);
  if ( !window )
    goto LABEL_14;
  v4 = (System_String_o *)window;
  if ( !System_String__Equals_63493168((System_String_o *)window, (System_String_o *)StringLiteral_2834/*"BATTLE_RESULTITEM_TITLECONF"*/, 0) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)window, v4, 0);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_14:
    sub_1C2D6EC(window, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
}


void BattleResultItemComponent__OnClickSwitchShowMode(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v8; // x8
  __int64 v9; // x2
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2AB3E & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultItemComponent_OnClickSwitchShowMode__);
    sub_1C2D490(&StringLiteral_17441/*"btn_bg_20"*/);
    sub_1C2D490(&StringLiteral_17442/*"btn_bg_21"*/);
    byte_4C2AB3E = 1;
  }
  v3 = Method_BattleResultItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_BattleResultItemComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v8 = &StringLiteral_17441/*"btn_bg_20"*/) : (v8 = &StringLiteral_17442/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v8, 0),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0) )
  {
LABEL_18:
    sub_1C2D6EC(showModeChangeButton, v5);
  }
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_r = &showModeChanButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !showModeChangeButton )
        goto LABEL_18;
      goto LABEL_16;
    }
LABEL_19:
    sub_1C2D6F4(showModeChangeButton, v5, v9);
  }
  if ( max_length <= 1 )
    goto LABEL_19;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !showModeChangeButton )
    goto LABEL_18;
LABEL_16:
  v16.fields.a = *p_a;
  v16.fields.b = *p_b;
  v16.fields.g = *p_g;
  v16.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v16, 0);
  showModeChangeButton = (UIButton_o *)this->fields.itemWindow;
  if ( !showModeChangeButton )
    goto LABEL_18;
  BattleViewItemlistComponent__SwitchShowNumMode(
    (BattleViewItemlistComponent_o *)showModeChangeButton,
    this->fields.isShowPossessionNum,
    0);
}


void BattleResultItemComponent__Open(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4C2AB22 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultItemComponent_endOpen__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&StringLiteral_5442/*"END_OPEN"*/);
    byte_4C2AB22 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      touchNextRoot,
                                                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5442/*"END_OPEN"*/, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0),
        !window) )
  {
LABEL_9:
    sub_1C2D6EC(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v5,
    window->klass->vtable._10_Open.method);
  BattleResultItemComponent__setCondensedScale(this, v6);
}


System_Collections_IEnumerator_o *BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2AB2D & 1) == 0 )
  {
    sub_1C2D490(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
    byte_4C2AB2D = 1;
  }
  v3 = sub_1C2D6DC(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58___ctor(
    (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
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

  if ( (byte_4C2AB2C & 1) == 0 )
  {
    sub_1C2D490(&BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
    byte_4C2AB2C = 1;
  }
  v5 = sub_1C2D6DC(BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
  BattleResultItemComponent__PlayVoiceCoroutine_d__57___ctor(
    (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), (int32_t)callback, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleResultItemComponent__SetAddItemIconEffect(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleResultItemComponent_o *v5; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v9; // w22
  int v10; // w23
  Il2CppObject *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  struct BattleViewItemlistComponent_o *v17; // x8
  int32_t v18; // w28
  Il2CppObject *v19; // x20
  int32_t v20; // w21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v22; // x23
  BattleResultItemComponent_o *v23; // x24
  BattleResultItemComponent_o *v24; // x25
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t animationSvtId; // [xsp+8h] [xbp-68h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-64h] BYREF

  v5 = this;
  if ( (byte_4C2AB2A & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_18784/*"ef_additem"*/);
    this = (BattleResultItemComponent_o *)sub_1C2D490(&StringLiteral_5846/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4C2AB2A = 1;
  }
  itemWindow = v5->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  g_eventId = v5->fields.g_eventId;
  v9 = 7 * (size / 7);
  if ( size == v9 )
    v10 = -21;
  else
    v10 = -14;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4);
  animationSvtId = v5->fields.animationSvtId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v12, v13, v14);
  v16 = System_String__Format_63499156((System_String_o *)StringLiteral_5846/*"Effect/BattleResult/{0}/{1}"*/, v11, v15, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v16, 0);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_object__51051712(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18784/*"ef_additem"*/,
                                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080),
        (v17 = v5->fields.itemWindow) == 0) )
  {
LABEL_30:
    sub_1C2D6EC(this, method);
  }
  v18 = v10 + v9;
  v19 = (Il2CppObject *)this;
  v20 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)v17->fields.itemObjectList;
    if ( !this )
      goto LABEL_30;
    if ( v20 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    if ( v18 <= v20 )
    {
      this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v20,
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v22 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mGo) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                v19,
                                                (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v23 = this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !this )
          goto LABEL_30;
        v24 = this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v5->fields.effectRoot, 0);
        if ( !byte_4C20DA1 )
        {
          sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v24,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( !byte_4C20DA6 )
        {
          sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
        }
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v24,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, 0, 0);
        v22->fields.eventPointMaxSprite = (struct UISprite_o *)v23;
        sub_1C2D434((CGThumbnailListItem_o *)&v22->fields.eventPointMaxSprite, (int32_t)v23, v25, v26);
      }
    }
    v17 = v5->fields.itemWindow;
    ++v20;
    if ( !v17 )
      goto LABEL_30;
  }
}


void BattleResultItemComponent__SetAddItemSvtAnimation(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v13; // x1
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_GameObject_o *v15; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t animationSvtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2AB29 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_18843/*"ef_presenter"*/);
    sub_1C2D490(&StringLiteral_5846/*"Effect/BattleResult/{0}/{1}"*/);
    byte_4C2AB29 = 1;
  }
  g_eventId = this->fields.g_eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4);
  animationSvtId = this->fields.animationSvtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v7, v8, v9);
  v11 = System_String__Format_63499156((System_String_o *)StringLiteral_5846/*"Effect/BattleResult/{0}/{1}"*/, v6, v10, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v11, 0);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              AssetStorage,
                              (System_String_o *)StringLiteral_18843/*"ef_presenter"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                  Object_object__51051712,
                                  (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v15 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AssetStorage, 0),
        (itemWindow = this->fields.itemWindow) == 0)
    || (v17 = (UnityEngine_Transform_o *)AssetStorage) == 0 )
  {
LABEL_16:
    sub_1C2D6EC(AssetStorage, v13);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0);
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C20DA6 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  UnityEngine_GameObject__SetActive(v15, 0, 0);
  this->fields.addItemSvtAnimationObj = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.addItemSvtAnimationObj, (int32_t)v15, v18, v19);
}


void BattleResultItemComponent__SetEventInfo(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventPointEntity_array *oldUserPoint,
        int64_t addDamagePoint,
        int32_t boostRate,
        int32_t countQp,
        EventConquestInfo_array *eventConquestInfos,
        bool isNotDisplayEventPoint,
        int32_t eventGroupId,
        const MethodInfo *method)
{
  BattleResultItemComponent___c__DisplayClass51_0_o *v18; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v22; // x21
  __int64 v23; // x2
  il2cpp_array_size_t v24; // x8
  UserEventPointEntity_o *v25; // x8
  int32_t v26; // w26
  int64_t EventPointNoGroup; // x0
  il2cpp_array_size_t max_length; // x8
  EventConquestInfo_o *v29; // x23
  Il2CppObject *v30; // x21
  EventConquestInfo_o *v31; // x8
  int64_t getNum; // x21
  int64_t MasterName_k__BackingField_high; // x22
  int32_t ImageId; // w4
  const MethodInfo *v35; // x7
  BattleResultItemComponent_o *v36; // x0
  int32_t v37; // w1
  int64_t v38; // x2
  int64_t v39; // x3
  bool IsShowEventPointMax; // w5
  int32_t v41; // w6
  Il2CppObject *MasterData_object; // x0
  UserEventRaidMaster_o *v43; // x22
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x20
  BalanceConfig_c *v46; // x8
  int64_t UserRaidDamagePointMax; // x22
  int64_t v48; // x20
  int64_t v49; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x0
  BattleResultItemComponent_c *v60; // x0
  System_String_o *DP_SP_BASE_NAME; // x20
  System_String_o *v62; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  Il2CppObject *v64; // x20
  BattleResultItemComponent_c *v65; // x0
  UISprite_o *eventDamageIconSprite; // x20
  int32_t pointImageId; // w21
  int64_t v68; // x25
  System_Func_object__bool__o *v69; // x27
  __int64 v70; // x27
  const MethodInfo *v71; // x3
  UserEventPointEntity_o *v72; // x8
  int64_t v73; // x26
  UserEventPointEntity_o *v74; // x8
  int32_t v75; // w23
  int64_t v76; // [xsp+8h] [xbp-78h] BYREF
  int64_t v77; // [xsp+10h] [xbp-70h] BYREF
  int32_t v78; // [xsp+1Ch] [xbp-64h] BYREF

  v78 = eventId;
  if ( (byte_4C2AB26 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&BattleResultItemComponent_TypeInfo);
    sub_1C2D490(&Method_BetterList_string__Contains__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    sub_1C2D490(&System_Func_UserEventPointEntity__bool__TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__);
    sub_1C2D490(&BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
    sub_1C2D490(&StringLiteral_25029/*"{0:#,0}"*/);
    sub_1C2D490(&StringLiteral_804/*"+ {0:#,0}"*/);
    byte_4C2AB26 = 1;
  }
  v18 = (BattleResultItemComponent___c__DisplayClass51_0_o *)sub_1C2D6DC(BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
  BattleResultItemComponent___c__DisplayClass51_0___ctor(v18, 0);
  if ( !v18 )
    goto LABEL_92;
  v18->fields.eventGroupId = eventGroupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_92;
  if ( !DataMasterBase_object__object__int___GetEntity(
          Master_object,
          eventId,
          (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_92;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             eventId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v22 = (EventDetailEntity_o *)Entity;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsEventPoint(
                                                                  (EventDetailEntity_o *)Entity,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsMakeFarm(v22, 0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return;
  }
  if ( isNotDisplayEventPoint )
    return;
  if ( !oldUserPoint || (v24 = oldUserPoint->max_length) == 0 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsMakeFarm(v22, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !eventConquestInfos )
        return;
      max_length = eventConquestInfos->max_length;
      if ( !max_length )
        return;
      if ( !(_DWORD)max_length )
        goto LABEL_93;
      v29 = eventConquestInfos->m_Items[0];
      if ( !v29 || v29->fields.rewardNum < 1 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v30 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      }
      if ( v30 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__GetEntityDefinitely(
                                                                        (UserItemMaster_o *)v30,
                                                                        (int64_t)Master_object[2].fields.list[1].monitor,
                                                                        v29->fields.objectId,
                                                                        0);
        if ( !LODWORD(eventConquestInfos->max_length) )
          goto LABEL_93;
        v31 = eventConquestInfos->m_Items[0];
        if ( v31 )
        {
          if ( Master_object )
          {
            getNum = v31->fields.getNum;
            MasterName_k__BackingField_high = SHIDWORD(Master_object->fields._MasterName_k__BackingField);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              Master_object,
                                                                              v29->fields.objectId,
                                                                              (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              if ( Master_object )
              {
                ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
                v36 = this;
                v37 = eventId;
                v38 = getNum;
                v39 = MasterName_k__BackingField_high;
                IsShowEventPointMax = 0;
                v41 = 0;
LABEL_91:
                BattleResultItemComponent__SetEventPointUi(v36, v37, v38, v39, ImageId, IsShowEventPointMax, v41, v35);
                return;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( addDamagePoint < 0 )
        return;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_92;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Master_object,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
      if ( !MasterData_object )
        return;
      v43 = (UserEventRaidMaster_o *)MasterData_object;
      rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(rootEventDamagePoint, 0, 0) )
        return;
      TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v43, eventId, 0);
      v46 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v46 = BalanceConfig_TypeInfo;
      }
      UserRaidDamagePointMax = v46->static_fields->UserRaidDamagePointMax;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v48 = System_Math__Min_64982380(TotalDamagePoint, UserRaidDamagePointMax, 0);
      v49 = System_Math__Min_64982380(addDamagePoint, BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax, 0);
      getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
      v77 = v49;
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v77, v51, v52, v53);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                      (System_String_o *)StringLiteral_804/*"+ {0:#,0}"*/,
                                                                      v54,
                                                                      0);
      if ( getEventDamagePointLabel )
      {
        UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Master_object, 0);
        nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
        v76 = v48;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v76, v56, v57, v58);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_25029/*"{0:#,0}"*/,
                                                                        v59,
                                                                        0);
        if ( nowEventDamagePointLabel )
        {
          UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Master_object, 0);
          v60 = BattleResultItemComponent_TypeInfo;
          if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
            v60 = BattleResultItemComponent_TypeInfo;
          }
          DP_SP_BASE_NAME = v60->static_fields->DP_SP_BASE_NAME;
          v62 = System_Int32__ToString((int32_t)&v78, 0);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_63457864(
                                                                          DP_SP_BASE_NAME,
                                                                          v62,
                                                                          0);
          eventDamageBGSprite = this->fields.eventDamageBGSprite;
          if ( eventDamageBGSprite )
          {
            v64 = (Il2CppObject *)Master_object;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageBGSprite->fields.mAtlas;
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UIAtlas__GetListOfSprites(
                                                                              (UIAtlas_o *)Master_object,
                                                                              0);
              if ( Master_object )
              {
                if ( !BetterList_object___Contains(
                        (BetterList_T__o *)Master_object,
                        v64,
                        (const MethodInfo_3300E88 *)Method_BetterList_string__Contains__) )
                {
                  v65 = BattleResultItemComponent_TypeInfo;
                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v65 = BattleResultItemComponent_TypeInfo;
                  }
                  v64 = (Il2CppObject *)v65->static_fields->DP_SP_BASE_NAME;
                }
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventDamageBGSprite;
                if ( Master_object )
                {
                  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)v64, 0);
                  eventDamageIconSprite = this->fields.eventDamageIconSprite;
                  pointImageId = v22->fields.pointImageId;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetItem(eventDamageIconSprite, pointImageId, 0);
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.rootEventDamagePoint;
                  if ( Master_object )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_92:
    sub_1C2D6EC(Master_object, v20);
  }
  if ( !(_DWORD)v24 )
    goto LABEL_93;
  v25 = oldUserPoint->m_Items[0];
  if ( !v25 )
    goto LABEL_92;
  v26 = v18->fields.eventGroupId;
  if ( v26 > 0 || !v25->fields.groupId )
  {
    if ( v26 <= 0 )
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
    else
      EventPointNoGroup = UserEventPointMaster__GetEventPoint(eventId, v26, 0);
    v68 = EventPointNoGroup;
    v69 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserEventPointEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v69,
      (Il2CppObject *)v18,
      Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__,
      0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__First_object__51338124(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)oldUserPoint,
                                                                    (System_Func_TSource__bool__o *)v69,
                                                                    (const MethodInfo_30F5B8C *)Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    if ( v26 <= 0 )
    {
      if ( !LODWORD(oldUserPoint->max_length) )
        goto LABEL_93;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)oldUserPoint->m_Items[0];
      if ( !Master_object )
        goto LABEL_92;
    }
    else if ( !Master_object )
    {
      goto LABEL_92;
    }
    v70 = v68 - *(_QWORD *)&Master_object->fields.revision;
    if ( v68 <= 0 && v70 < 1 )
      return;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsEventPointByQp(v22, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !LODWORD(oldUserPoint->max_length) )
        goto LABEL_93;
      v72 = oldUserPoint->m_Items[0];
      if ( !v72 )
        goto LABEL_92;
      v73 = v72->fields.value + countQp;
      if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v22, v68, v71) )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleResultItemComponent__GetIsShowEventPointMax(
                                                                        this,
                                                                        v22,
                                                                        v73,
                                                                        v71);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          v73 = v68;
        if ( LODWORD(oldUserPoint->max_length) )
        {
          v74 = oldUserPoint->m_Items[0];
          if ( !v74 )
            goto LABEL_92;
          v70 = v73 - v74->fields.value;
          goto LABEL_90;
        }
LABEL_93:
        sub_1C2D6F4(Master_object, v20, v23);
      }
      v70 = countQp;
    }
    else
    {
      v73 = v68;
    }
LABEL_90:
    v75 = v22->fields.pointImageId;
    IsShowEventPointMax = BattleResultItemComponent__GetIsShowEventPointMax(this, v22, v73, v71);
    v36 = this;
    v37 = eventId;
    v38 = v70;
    v39 = v73;
    ImageId = v75;
    v41 = boostRate;
    goto LABEL_91;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__SetEventPointUi(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        int64_t addEventPoint,
        int64_t totalEventPoint,
        int32_t imageId,
        bool isEventPointMax,
        int32_t boostRate,
        const MethodInfo *method)
{
  UILabel_o *getEventPointLabel; // x25
  Il2CppObject *v15; // x0
  System_String_o *IfExists; // x0
  System_String_o *v17; // x1
  UILabel_o *nowEventPointLabel; // x24
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  UISprite_o *eventIconSprite; // x23
  UILabel_o *getTitleLabel; // x22
  __int64 v25; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x22
  struct BattleResultItemComponent_StaticFields *static_fields; // x8
  __int64 v30; // x9
  UILabel_o *v31; // x22
  __int64 v32; // x0
  BattleResultItemComponent_c *v33; // x8
  __int64 v34; // x23
  System_String_o *EP_GET_LOCALE_KEY; // x24
  System_String_o *v36; // x0
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  struct System_String_o *v40; // x1
  UILabel_o *getBoostLabel; // x22
  System_String_o *v42; // x23
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  BattleResultItemComponent_c *v47; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v49; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  Il2CppObject *v51; // x21
  BattleResultItemComponent_c *v52; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  int64_t v54; // [xsp+8h] [xbp-68h] BYREF
  int64_t v55; // [xsp+10h] [xbp-60h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-54h] BYREF

  v56 = eventId;
  if ( (byte_4C2AB27 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BattleResultItemComponent_TypeInfo);
    sub_1C2D490(&Method_BetterList_string__Contains__);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_2842/*"BATTLE_RESULT_GET_EP_RATE"*/);
    sub_1C2D490(&StringLiteral_25029/*"{0:#,0}"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_804/*"+ {0:#,0}"*/);
    byte_4C2AB27 = 1;
  }
  getEventPointLabel = this->fields.getEventPointLabel;
  v55 = addEventPoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v55, addEventPoint, totalEventPoint, *(_QWORD *)&imageId);
  IfExists = System_String__Format((System_String_o *)StringLiteral_804/*"+ {0:#,0}"*/, v15, 0);
  if ( !getEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(getEventPointLabel, IfExists, 0);
  nowEventPointLabel = this->fields.nowEventPointLabel;
  v54 = totalEventPoint;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v54, v19, v20, v21);
  IfExists = System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v22, 0);
  if ( !nowEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(nowEventPointLabel, IfExists, 0);
  CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0);
  CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0);
  eventIconSprite = this->fields.eventIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(eventIconSprite, imageId, 0);
  IfExists = (System_String_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
  if ( !getTitleLabel )
    goto LABEL_49;
  v25 = 24;
  if ( boostRate > 0 )
    v25 = 28;
  UILabel__set_fontSize(
    getTitleLabel,
    *(_DWORD *)((char *)&BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME + v25),
    0);
  IfExists = (System_String_o *)this->fields.getTitleLabel;
  if ( !IfExists )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0);
  v27 = BattleResultItemComponent_TypeInfo;
  v28 = gameObject;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v27 = BattleResultItemComponent_TypeInfo;
  }
  static_fields = v27->static_fields;
  v30 = 16;
  if ( boostRate > 0 )
    v30 = 20;
  GameObjectExtensions__SetLocalPositionY(v28, *(float *)((char *)&static_fields->EP_SP_BASE_NAME + v30), 0);
  v31 = this->fields.getTitleLabel;
  v32 = sub_1C2D538(string___TypeInfo, 2);
  v33 = BattleResultItemComponent_TypeInfo;
  v34 = v32;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v33 = BattleResultItemComponent_TypeInfo;
  }
  EP_GET_LOCALE_KEY = v33->static_fields->EP_GET_LOCALE_KEY;
  v36 = System_Int32__ToString((int32_t)&v56, 0);
  IfExists = System_String__Concat_63457864(EP_GET_LOCALE_KEY, v36, 0);
  if ( !v34 )
    goto LABEL_49;
  if ( !*(_DWORD *)(v34 + 24)
    || (*(_QWORD *)(v34 + 32) = IfExists,
        sub_1C2D434((CGThumbnailListItem_o *)(v34 + 32), (int32_t)IfExists, v37, v38),
        *(_DWORD *)(v34 + 24) <= 1u) )
  {
    sub_1C2D6F4(IfExists, v17, v37);
  }
  v40 = BattleResultItemComponent_TypeInfo->static_fields->EP_GET_LOCALE_KEY;
  *(_QWORD *)(v34 + 40) = v40;
  sub_1C2D434((CGThumbnailListItem_o *)(v34 + 40), (int32_t)v40, v37, v39);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v34, 0);
  if ( !v31 )
LABEL_49:
    sub_1C2D6EC(IfExists, v17);
  UILabel__set_text(v31, IfExists, 0);
  getBoostLabel = this->fields.getBoostLabel;
  if ( boostRate <= 0 )
  {
    v17 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2842/*"BATTLE_RESULT_GET_EP_RATE"*/, 0);
    *(float *)&v55 = (float)((float)boostRate / 1000.0) + 1.0;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v43, v44, v45);
    IfExists = System_String__Format(v42, v46, 0);
    v17 = IfExists;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  UILabel__set_text(getBoostLabel, v17, 0);
  v47 = BattleResultItemComponent_TypeInfo;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v47 = BattleResultItemComponent_TypeInfo;
  }
  EP_SP_BASE_NAME = v47->static_fields->EP_SP_BASE_NAME;
  v49 = System_Int32__ToString((int32_t)&v56, 0);
  IfExists = System_String__Concat_63457864(EP_SP_BASE_NAME, v49, 0);
  eventPointBgSprite = this->fields.eventPointBgSprite;
  if ( !eventPointBgSprite )
    goto LABEL_49;
  v51 = (Il2CppObject *)IfExists;
  IfExists = (System_String_o *)eventPointBgSprite->fields.mAtlas;
  if ( !IfExists )
    goto LABEL_49;
  IfExists = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)IfExists, 0);
  if ( !IfExists )
    goto LABEL_49;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)IfExists,
          v51,
          (const MethodInfo_3300E88 *)Method_BetterList_string__Contains__) )
  {
    v52 = BattleResultItemComponent_TypeInfo;
    if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
      v52 = BattleResultItemComponent_TypeInfo;
    }
    v51 = (Il2CppObject *)v52->static_fields->EP_SP_BASE_NAME;
  }
  IfExists = (System_String_o *)this->fields.eventPointBgSprite;
  if ( !IfExists )
    goto LABEL_49;
  UISprite__set_spriteName((UISprite_o *)IfExists, (System_String_o *)v51, 0);
  eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventPointMaxSprite, 0, 0) )
  {
    IfExists = (System_String_o *)this->fields.eventPointMaxSprite;
    if ( !IfExists )
      goto LABEL_49;
    IfExists = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0);
    if ( !IfExists )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, isEventPointMax, 0);
  }
  IfExists = (System_String_o *)this->fields.rootEventPoint;
  if ( !IfExists )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__SetGroupEventRoot(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        int32_t countQp,
        System_Int32_array *viewGroupIds,
        int64_t conquestRewardQp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nomalRootObj; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x5

  nomalRootObj = this->fields.nomalRootObj;
  if ( !nomalRootObj
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 0, 0),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0)
    || (nomalRootObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalRootObj, 0)) == 0
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 1, 0), !userGame)
    || (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0
    || (BattleResultEventItemGroupComponent__SetQpInfo(
          (BattleResultEventItemGroupComponent_o *)nomalRootObj,
          userGame->fields.qp - conquestRewardQp,
          countQp,
          v17),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0) )
  {
    sub_1C2D6EC(nomalRootObj, *(_QWORD *)&eventId);
  }
  BattleResultEventItemGroupComponent__SetGroupPointInfo(
    (BattleResultEventItemGroupComponent_o *)nomalRootObj,
    eventId,
    userGame->fields.userId,
    oldUsrPoint,
    viewGroupIds,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__SetNormalRoot(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        int32_t countQp,
        int32_t boostRate,
        int32_t conquestRewardQp,
        int32_t firstClearRewardQp,
        UserGameEntity_o *oldGame,
        EventConquestInfo_array *eventConquestInfos,
        bool isNotDisplayEventPoint,
        int32_t eventGroupId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *groupRootObj; // x0
  UILabel_o *getQpLabel; // x27
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int64_t qp; // x28
  int64_t QpMax; // x8
  int64_t v33; // x26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v35; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  const MethodInfo *v37; // [xsp+8h] [xbp-78h]
  int64_t v38; // [xsp+10h] [xbp-70h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C2AB25 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_25029/*"{0:#,0}"*/);
    sub_1C2D490(&StringLiteral_804/*"+ {0:#,0}"*/);
    byte_4C2AB25 = 1;
  }
  groupRootObj = (UnityEngine_Component_o *)this->fields.groupRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  groupRootObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(groupRootObj, 0);
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0);
  groupRootObj = (UnityEngine_Component_o *)this->fields.nomalRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 1, 0);
  getQpLabel = this->fields.getQpLabel;
  v39 = countQp;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v24, v25, v26);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_804/*"+ {0:#,0}"*/, v27, 0);
  if ( !getQpLabel )
    goto LABEL_30;
  UILabel__set_text(getQpLabel, (System_String_o *)groupRootObj, 0);
  if ( !userGame )
    goto LABEL_30;
  qp = userGame->fields.qp;
  groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_QWORD *)(groupRootObj[7].fields.m_CachedPtr + 8);
  if ( qp >= QpMax )
  {
    if ( !oldGame )
      goto LABEL_30;
    v33 = oldGame->fields.qp + countQp;
    if ( v33 < 0 )
      goto LABEL_33;
    if ( !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v33 > QpMax )
    {
LABEL_33:
      if ( !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v33 = *(_QWORD *)(groupRootObj[7].fields.m_CachedPtr + 8);
    }
  }
  else
  {
    v33 = userGame->fields.qp - (firstClearRewardQp + (__int64)conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v38 = v33;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v38, v28, v29, v30);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v35, 0);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0) )
  {
LABEL_30:
    sub_1C2D6EC(groupRootObj, *(_QWORD *)&eventId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0);
  rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0, 0) )
  {
    groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventDamagePoint;
    if ( groupRootObj )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0);
      goto LABEL_27;
    }
    goto LABEL_30;
  }
LABEL_27:
  if ( eventId >= 1 )
    BattleResultItemComponent__SetEventInfo(
      this,
      eventId,
      oldUsrPoint,
      addDamagePoint,
      boostRate,
      countQp,
      eventConquestInfos,
      isNotDisplayEventPoint,
      eventGroupId,
      v37);
}


void BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v10; // x2
  struct BattleViewItemlistComponent_o *v11; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  float v13; // s8
  float v14; // s10
  float v15; // s9
  System_Collections_IEnumerator_o *v16; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2AB2B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4C2AB2B = 1;
  }
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(addItemSvtAnimationObj, 1, 0);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)itemWindow->fields.itemObjectList;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)addItemSvtAnimationObj,
                                                         LODWORD(addItemSvtAnimationObj[1].klass) - 1,
                                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(addItemSvtAnimationObj, 0);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, 0);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(addItemSvtAnimationObj, 0);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v18.fields.y = y;
  v18.fields.z = z;
  v18.fields.x = x + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v18, 0);
  v11 = this->fields.itemWindow;
  if ( !v11 )
    goto LABEL_19;
  itemObjectList = v11->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_19;
  if ( itemObjectList->fields._size >= 8 )
  {
    addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
    if ( addItemSvtAnimationObj )
    {
      addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             addItemSvtAnimationObj,
                                                             0);
      if ( addItemSvtAnimationObj )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, 0);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          v13 = localPosition.fields.x;
          v14 = localPosition.fields.y;
          v15 = localPosition.fields.z;
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0);
          if ( addItemSvtAnimationObj )
          {
            v20.fields.y = v14 + 9.0;
            v20.fields.x = v13;
            v20.fields.z = v15;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v20, 0);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_19:
    sub_1C2D6EC(addItemSvtAnimationObj, callback);
  }
LABEL_18:
  v16 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


void BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C2AB39 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultItemComponent_EndCloseDialogCallBack__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AB39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    sub_1C2D6EC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C2AB3C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AB3C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C2D6EC(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB3A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    byte_4C2AB3A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
}


void BattleResultItemComponent__endItemDialogCallBack(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB36 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    byte_4C2AB36 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
}


void BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB23 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    byte_4C2AB23 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9257/*"NEXT"*/, 0),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0) )
  {
    sub_1C2D6EC(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0);
}


BattleDropItem_o *BattleResultItemComponent__getNewDrop(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleDropItem__o *v6; // x8
  BattleDropItem_o *v7; // x19

  if ( (byte_4C2AB3D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4C2AB3D = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v6 = this->fields.newDroplist;
  if ( !v6 )
    sub_1C2D6EC(Item, v5);
  v7 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v6,
    0,
    (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v7;
}


void BattleResultItemComponent__itemDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C2AB35 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultItemComponent_endItemDialogCallBack__);
    sub_1C2D490(&Method_BattleResultItemComponent_itemDialogCallBack__);
    byte_4C2AB35 = 1;
  }
  v4 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_BattleResultItemComponent_itemDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDialog = this->fields.itemDialog;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0);
  if ( !itemDialog )
    sub_1C2D6EC(v8, v9);
  ItemDetailInfoComponent__Close_33002376(itemDialog, v7, 0);
}


System_Collections_IEnumerator_o *BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C2AB2E & 1) == 0 )
  {
    sub_1C2D490(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
    byte_4C2AB2E = 1;
  }
  v6 = sub_1C2D6DC(BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59___ctor(
    (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v6,
    0,
    0);
  if ( !v6 )
    sub_1C2D6EC(v7, v8);
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)itemIconEffectObj, v9, v10);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 40), (int32_t)dropItem, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void BattleResultItemComponent__setCondensedScale(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UILabel_o *getBoostLabel; // x0
  UILabel_o *getTitleLabel; // x20

  if ( (byte_4C2AB3F & 1) == 0 )
  {
    sub_1C2D490(&BattleResultItemComponent_TypeInfo);
    byte_4C2AB3F = 1;
  }
  getBoostLabel = (UILabel_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
  if ( !getTitleLabel
    || (UILabel__SetCondensedScale(
          getTitleLabel,
          BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
          0,
          0),
        (getBoostLabel = this->fields.getBoostLabel) == 0) )
  {
    sub_1C2D6EC(getBoostLabel, method);
  }
  UILabel__SetCondensedScale(
    getBoostLabel,
    BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
    0,
    0);
}


void BattleResultItemComponent__setResultData(
        BattleResultItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t getqp,
        int32_t originalGetQp,
        UserGameEntity_o *oldGame,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        UserEventPointEntity_array *oldUsrPoint,
        int64_t addDamagePoint,
        System_Int32_array *viewGroupIds,
        int32_t boostRate,
        DropUpInfo_array *dropupinfos,
        EventConquestInfo_array *eventConquestInfos,
        int32_t firstClearRewardQp,
        bool isNotDisplayEventPoint,
        BattleResultAddRewardBonus_o *rewardBonus,
        const MethodInfo *method)
{
  __int64 v24; // x26
  System_Collections_Generic_List_object__o *v25; // x22
  void *object; // x0
  struct BattleDropItem_array *gifts; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o **v30; // x24
  System_Collections_Generic_List_object__o *v31; // x27
  System_Predicate_object__o *v32; // x22
  Il2CppObject *v33; // x28
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UserEventEntity_array *v40; // x2
  __int64 v41; // x22
  __int64 v42; // x8
  int v43; // w9
  System_Predicate_object__o **v44; // x25
  System_Predicate_object__o *v45; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  _DWORD *v48; // x22
  int max_length; // w8
  __int64 v50; // x9
  BattleDropItem_o *v51; // x12
  struct System_String_array *voiceIds; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_List_object__o *v55; // x23
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x25
  BattleResultItemComponent___c_c *v57; // x0
  System_Predicate_object__o *_9__48_2; // x22
  Il2CppObject *v59; // x26
  struct BattleResultItemComponent___c_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  BattleViewItemlistComponent_o *itemWindow; // x22
  BattleDropItem_array *v64; // x23
  BattleDropItemComponent_ClickDelegate_o *v65; // x25
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x1
  UserGameEntity_o *SelfUserGame; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x28
  int32_t v71; // w26
  _BOOL8 v72; // x0
  __int64 v73; // x1
  BattleDropItem_o *current; // x22
  _BOOL8 isAutoSellItem; // x0
  __int64 v76; // x1
  Il2CppObject *v77; // x0
  __int64 v78; // x1
  int klass; // w8
  int64_t v80; // x4
  int v81; // w8
  int v82; // w20
  int32_t v83; // w29
  EventConquestInfo_o *v84; // x22
  int v85; // w8
  il2cpp_array_size_t v86; // x8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-108h]
  int32_t eventGroupId; // [xsp+20h] [xbp-F0h]
  const MethodInfo *v89; // [xsp+28h] [xbp-E8h]
  UserGameEntity_o *v90; // [xsp+60h] [xbp-B0h]
  UserEventPointEntity_array *oldUsrPointa; // [xsp+68h] [xbp-A8h]
  int32_t eventIda; // [xsp+74h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+90h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF

  if ( (byte_4C2AB24 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Find_DropUpInfo___);
    sub_1C2D490(&BattleDropItem_TypeInfo);
    sub_1C2D490(&Method_BattleResultItemComponent_setShowConf__);
    sub_1C2D490(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__Insert__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_1C2D490(&System_Predicate_DropUpInfo__TypeInfo);
    sub_1C2D490(&System_Predicate_BattleDropItem__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleResultItemComponent___c__setResultData_b__48_0__);
    sub_1C2D490(&Method_BattleResultItemComponent___c__setResultData_b__48_2__);
    sub_1C2D490(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__);
    sub_1C2D490(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
    sub_1C2D490(&BattleResultItemComponent___c_TypeInfo);
    byte_4C2AB24 = 1;
  }
  entity = 0;
  memset(&v94, 0, sizeof(v94));
  v24 = sub_1C2D6DC(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
  BattleResultItemComponent___c__DisplayClass48_0___ctor((BattleResultItemComponent___c__DisplayClass48_0_o *)v24, 0);
  eventIda = eventId;
  this->fields.g_eventId = eventId;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleDropItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v24 )
    goto LABEL_27;
  *(_QWORD *)(v24 + 16) = v25;
  v30 = (System_Collections_Generic_List_object__o **)(v24 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  object = *(void **)(v24 + 16);
  if ( !object )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)object,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  object = BattleResultItemComponent___c_TypeInfo;
  v31 = *v30;
  if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
    object = BattleResultItemComponent___c_TypeInfo;
  }
  v32 = *(System_Predicate_object__o **)(*((_QWORD *)object + 23) + 8LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)object + 56) )
    {
      j_il2cpp_runtime_class_init_0(object);
      object = BattleResultItemComponent___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)object + 23);
    v32 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_BattleDropItem__TypeInfo);
    System_Predicate_object____ctor(v32, v33, Method_BattleResultItemComponent___c__setResultData_b__48_0__, 0);
    static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)v32;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__48_0, (int32_t)v32, v35, v36);
  }
  if ( !v31 )
    goto LABEL_27;
  All = System_Collections_Generic_List_object___FindAll(
          v31,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.newDroplist, (int32_t)All, v38, v39);
  if ( getqp >= 1 )
  {
    v41 = sub_1C2D6DC(BattleDropItem_TypeInfo);
    BattleDropItem___ctor((BattleDropItem_o *)v41, 0);
    if ( !v41 )
      goto LABEL_27;
    *(_QWORD *)(v41 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v41, getqp, originalGetQp, 0);
    object = *v30;
    if ( !*v30 )
      goto LABEL_27;
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)object,
      0,
      (Il2CppObject *)v41,
      (const MethodInfo_378A934 *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  v90 = oldGame;
  oldUsrPointa = oldUsrPoint;
  if ( dropupinfos )
  {
    v42 = *(_QWORD *)(v24 + 16);
    *(_DWORD *)(v24 + 24) = 0;
    if ( !v42 )
      goto LABEL_27;
    v43 = 0;
    v44 = (System_Predicate_object__o **)(v24 + 32);
    while ( v43 < *(_DWORD *)(v42 + 24) )
    {
      v45 = *v44;
      if ( !*v44 )
      {
        v45 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_DropUpInfo__TypeInfo);
        System_Predicate_object____ctor(
          v45,
          (Il2CppObject *)v24,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          0);
        *(_QWORD *)(v24 + 32) = v45;
        sub_1C2D434((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v45, v46, v47);
      }
      object = System_Array__Find_object_(
                 (System_Object_array *)dropupinfos,
                 (System_Predicate_T__o *)v45,
                 (const MethodInfo_31D383C *)Method_System_Array_Find_DropUpInfo___);
      if ( object )
      {
        v48 = object;
        object = *v30;
        if ( !*v30 )
          goto LABEL_27;
        object = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)object,
                   *(_DWORD *)(v24 + 24),
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !object )
          goto LABEL_27;
        *((_DWORD *)object + 18) = v48[5];
      }
      v42 = *(_QWORD *)(v24 + 16);
      v43 = *(_DWORD *)(v24 + 24) + 1;
      *(_DWORD *)(v24 + 24) = v43;
      if ( !v42 )
        goto LABEL_27;
    }
  }
  if ( rewardBonus )
  {
    gifts = rewardBonus->fields.gifts;
    if ( gifts )
    {
      max_length = gifts->max_length;
      if ( max_length >= 1 )
      {
        v50 = 0;
        while ( (unsigned int)v50 < max_length )
        {
          v51 = gifts->m_Items[v50];
          if ( !v51 )
            goto LABEL_27;
          ++v50;
          v51->fields.isAddReward = 1;
          if ( (int)v50 >= max_length )
            goto LABEL_35;
        }
LABEL_94:
        sub_1C2D6F4(object, gifts, v40);
      }
LABEL_35:
      object = *v30;
      if ( !*v30 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)object,
        (System_Collections_Generic_IEnumerable_T__o *)gifts,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      this->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = rewardBonus->fields.voiceIds;
      this->fields.voiceIds = voiceIds;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voiceIds, (int32_t)voiceIds, v53, v54);
      v55 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleDropItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v55,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v55 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        v55,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      newDroplist = this->fields.newDroplist;
      v57 = BattleResultItemComponent___c_TypeInfo;
      if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v57 = BattleResultItemComponent___c_TypeInfo;
      }
      _9__48_2 = (System_Predicate_object__o *)v57->static_fields->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v57 = BattleResultItemComponent___c_TypeInfo;
        }
        v59 = (Il2CppObject *)v57->static_fields->__9;
        _9__48_2 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_BattleDropItem__TypeInfo);
        System_Predicate_object____ctor(_9__48_2, v59, Method_BattleResultItemComponent___c__setResultData_b__48_2__, 0);
        v60 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v60->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_1C2D434((CGThumbnailListItem_o *)&v60->__9__48_2, (int32_t)_9__48_2, v61, v62);
      }
      object = System_Collections_Generic_List_object___FindAll(
                 v55,
                 (System_Predicate_T__o *)_9__48_2,
                 (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !newDroplist )
LABEL_27:
        sub_1C2D6EC(object, gifts);
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)newDroplist,
        (System_Collections_Generic_IEnumerable_T__o *)object,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  object = *v30;
  if ( !*v30 )
    goto LABEL_27;
  itemWindow = this->fields.itemWindow;
  v64 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)object,
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v65 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C2D6DC(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v65,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_setShowConf__,
    0);
  if ( !itemWindow )
    goto LABEL_27;
  BattleViewItemlistComponent__setListDataCustomColumn_47330360(
    itemWindow,
    v64,
    eventIda,
    v65,
    this->fields.itemColumnCount,
    0);
  object = this->fields.itemWindow;
  if ( !object )
    goto LABEL_27;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)object, 0);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(this, v66);
    BattleResultItemComponent__SetAddItemSvtAnimation(this, v67);
    BattleResultItemComponent__SetAddItemIconEffect(this, v68);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !object )
    goto LABEL_27;
  object = DataManager__GetMasterData_object_(
             (DataManager_o *)object,
             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v30 )
    goto LABEL_27;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    *v30,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v71 = 0;
  v94 = v93;
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v72 )
      break;
    current = (BattleDropItem_o *)v94.fields._current;
    if ( !v94.fields._current )
      sub_1C2D6EC(v72, v73);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v94.fields._current, 0);
    if ( current->fields.type == 2 )
    {
      if ( !v70 )
        sub_1C2D6EC(isAutoSellItem, v76);
      v77 = DataMasterBase_object__object__int___GetEntity(
              v70,
              current->fields.objectId,
              (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v77 )
        sub_1C2D6EC(0, v78);
      klass = (int)v77[3].klass;
      if ( klass == 1 || klass == 16 )
        v71 += BattleDropItem__getTotalNum(current, 0);
    }
    v71 += current->fields.num * current->fields.sellQp;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_27;
  v81 = eventConquestInfos->max_length;
  if ( v81 < 1 )
  {
    v83 = 0;
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  else
  {
    v82 = 0;
    v83 = 0;
    do
    {
      if ( v82 >= (unsigned int)v81 )
        goto LABEL_94;
      v84 = eventConquestInfos->m_Items[v82];
      if ( !v84 )
        goto LABEL_27;
      if ( v84->fields.type == 2 )
      {
        if ( !v70 )
          goto LABEL_27;
        object = DataMasterBase_object__object__int___GetEntity(
                   v70,
                   v84->fields.objectId,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( object )
        {
          v85 = *((_DWORD *)object + 12);
          if ( v85 == 16 || v85 == 1 )
            v83 += v84->fields.getNum;
        }
      }
      v81 = eventConquestInfos->max_length;
      ++v82;
    }
    while ( v82 < v81 );
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  v86 = viewGroupIds->max_length;
  if ( (_DWORD)v86 == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !object )
      goto LABEL_27;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)object,
           &entity,
           eventIda,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      object = entity;
      if ( !entity )
        goto LABEL_27;
      object = (void *)EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)entity, 0);
      if ( ((unsigned __int8)object & 1) != 0 )
      {
        if ( !LODWORD(viewGroupIds->max_length) )
          goto LABEL_94;
        eventGroupId = viewGroupIds->m_Items[0];
        goto LABEL_93;
      }
    }
    v86 = viewGroupIds->max_length;
  }
  if ( v86 )
  {
    BattleResultItemComponent__SetGroupEventRoot(
      this,
      eventIda,
      v40,
      oldUsrPointa,
      v80,
      SelfUserGame,
      v71,
      viewGroupIds,
      v83,
      (const MethodInfo *)oldGamea);
    return;
  }
  eventGroupId = 0;
LABEL_93:
  BattleResultItemComponent__SetNormalRoot(
    this,
    eventIda,
    oldUsrPointa,
    addDamagePoint,
    SelfUserGame,
    v71,
    boostRate,
    v83,
    firstClearRewardQp,
    v90,
    eventConquestInfos,
    isNotDisplayEventPoint,
    eventGroupId,
    v89);
}


void BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB37 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9631/*"OPEN_COMMANDCODE"*/);
    byte_4C2AB37 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1C2D6EC(0, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9631/*"OPEN_COMMANDCODE"*/, 0);
}


void BattleResultItemComponent__setShowConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  int32_t type; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( !item )
    sub_1C2D6EC(this, 0);
  type = item->fields.type;
  if ( Gift__IsServant(type, 0) )
  {
    BattleResultItemComponent__setShowServantConf(this, item, v6);
  }
  else if ( Gift__IsItem(type, 0) )
  {
    BattleResultItemComponent__setShowItemConf(this, item->fields.objectId, v7);
  }
  else if ( Gift__IsCommandCode(type, 0) )
  {
    BattleResultItemComponent__setShowCommandCodeConf(this, item->fields.userSvtId, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleResultItemComponent__setShowItemConf(
        BattleResultItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB33 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9638/*"OPEN_ITEM"*/);
    byte_4C2AB33 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1C2D6EC(0, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9638/*"OPEN_ITEM"*/, 0);
}


void BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4C2AB2F & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1C2D490(&StringLiteral_9646/*"OPEN_SERVANT"*/);
    byte_4C2AB2F = 1;
  }
  v4->fields.tmp_userSvtId = 0;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0) )
  {
    sub_1C2D6EC(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9646/*"OPEN_SERVANT"*/, 0);
}


void BattleResultItemComponent__showCommandCodeDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v6; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22

  if ( (byte_4C2AB38 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultItemComponent_commandCodeDialogCallBack__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2AB38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0),
        !v6) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  CommonUI__OpenServantStatusDialog_31180264((CommonUI_o *)v6, 0, (UserCommandCodeEntity_o *)Entity, v7, 0, 0);
}


void BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v7; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v8; // x22

  if ( (byte_4C2AB34 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultItemComponent_itemDialogCallBack__);
    sub_1C2D490(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2AB34 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v7 = (ItemEntity_o *)Entity,
        v8 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C2D6DC(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0),
        !itemDialog) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  ItemDetailInfoComponent__Open(itemDialog, v7, v8, 50, 0);
}


void BattleResultItemComponent__showServantDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  int64_t tmp_userSvtId; // x21
  Il2CppObject *Instance; // x20
  int64_t v5; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_4C2AB30 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultItemComponent_DialogCallBack__);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AB30 = 1;
  }
  tmp_userSvtId = this->fields.tmp_userSvtId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( tmp_userSvtId >= 1 )
  {
    v5 = this->fields.tmp_userSvtId;
    v6 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v6,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_31176880((CommonUI_o *)Instance, 0, v5, v6, 0, 0);
      return;
    }
LABEL_8:
    sub_1C2D6EC(v7, v8);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_31180960((CommonUI_o *)Instance, 0, tmp_svtId, v10, 0);
}


void BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58___ctor(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__MoveNext(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v2; // x20
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x19
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  System_Collections_Generic_List_object__o *itemObjectList; // x0
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v7; // x9
  __int128 v8; // q0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *current; // x0
  BattleDropItemComponent_o *Component_object; // x0
  __int64 v15; // x1
  struct BattleDropItem_o *itemData; // x8
  System_Collections_IEnumerator_o *v17; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v19; // x1
  struct BattleResultComponent_o *parentComp; // x8
  __int64 v21; // x0
  __int64 v22; // x1
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v23; // x8
  BattleResultComponent_o *v24; // x0
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v26; // x19
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_T__o v30[2]; // [xsp+8h] [xbp-78h] BYREF
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o **v31; // [xsp+48h] [xbp-38h]
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v32; // [xsp+58h] [xbp-28h] BYREF

  v32 = this;
  v2 = this;
  if ( (byte_4C2AB48 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C2AB48 = 1;
  }
  v31 = &v32;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C2D6EC(this, method);
    itemWindow = _4__this->fields.itemWindow;
    if ( !itemWindow )
      sub_1C2D6EC(this, method);
    itemObjectList = (System_Collections_Generic_List_object__o *)itemWindow->fields.itemObjectList;
    if ( !itemObjectList )
      sub_1C2D6EC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v30,
      itemObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v7 = v32;
    v8 = *(_OWORD *)&v30[0].fields._list;
    p__7__wrap1 = &v32->fields.__7__wrap1;
    v30[1] = v30[0];
    v32->fields.__7__wrap1.fields._current = (struct UnityEngine_GameObject_o *)v30[0].fields._current;
    *(_OWORD *)&v7->fields.__7__wrap1.fields._list = v8;
    sub_1C2D434((CGThumbnailListItem_o *)p__7__wrap1, 0, v10, v11);
    v2 = v32;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1C2D6EC(0, v12);
    Component_object = (BattleDropItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      current,
                                                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_object )
      sub_1C2D6EC(0, v15);
    itemData = Component_object->fields.itemData;
    if ( !itemData )
      sub_1C2D6EC(Component_object, v15);
    if ( itemData->fields.isAddReward )
    {
      if ( !_4__this )
        sub_1C2D6EC(Component_object, v15);
      v17 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              _4__this,
              Component_object->fields.itemIconEffectObj,
              Component_object,
              0);
      started = UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0);
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        sub_1C2D6EC(started, v19);
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v26 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v26, 0.01, 0);
        v27 = v32;
        v32->fields.__2__current = (Il2CppObject *)v26;
        sub_1C2D434((CGThumbnailListItem_o *)&v27->fields.__2__current, (int32_t)v26, v28, v29);
        result = 1;
        v32->fields.__1__state = 1;
        return result;
      }
    }
    v2 = v32;
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(v32, v12);
  v23 = v32;
  v32->fields.__7__wrap1.fields._list = 0;
  *(_QWORD *)&v23->fields.__7__wrap1.fields._index = 0;
  v23->fields.__7__wrap1.fields._current = 0;
  if ( !_4__this )
    sub_1C2D6EC(v21, v22);
  v24 = _4__this->fields.parentComp;
  if ( !v24 )
    sub_1C2D6EC(0, v22);
  BattleResultComponent__QpFix(v24, 0);
  return 0;
}


Il2CppObject *BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(this, method);
}


void BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2AB49 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    byte_4C2AB49 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void BattleResultItemComponent__PlayVoiceCoroutine_d__57___ctor(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultItemComponent__PlayVoiceCoroutine_d__57__MoveNext(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v4; // x19
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v11; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  System_Collections_IEnumerator_o *v16; // x0
  System_Random_o *v17; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass57_0_o *_8__1; // x8
  unsigned int v20; // w22
  System_String_o *v21; // x0
  __int64 v22; // x2
  struct System_String_array *v23; // x8
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v24; // x21
  System_String_o *v25; // x22
  SeManager_c *v26; // x0
  Il2CppObject *v27; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v29; // x23
  struct BattleResultItemComponent___c__DisplayClass57_0_o *v30; // x8
  struct BattleResultComponent_o *v31; // x8
  CGThumbnailListItem_o *v32; // x19

  v4 = this;
  if ( (byte_4C2AB4A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&System_Random_TypeInfo);
    sub_1C2D490(&SeManager_TypeInfo);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__);
    sub_1C2D490(&BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)sub_1C2D490(&StringLiteral_12756/*"Servants_"*/);
    byte_4C2AB4A = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_30;
    }
    else
    {
      if ( _1__state )
        return 0;
      v4->fields.__1__state = -1;
      v7 = (Il2CppObject *)sub_1C2D6DC(BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor(v7, 0);
      v4->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass57_0_o *)v7;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v7, v8, v9);
      if ( !_4__this )
        goto LABEL_30;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_30;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v11 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v11, 0.3, 0);
        v4->fields.__2__current = (Il2CppObject *)v11;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)v11, v13, v14);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
    }
    v16 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0);
    v17 = (System_Random_o *)sub_1C2D6DC(System_Random_TypeInfo);
    System_Random___ctor(v17, 0);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_30;
    if ( !v17 )
      goto LABEL_30;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, const MethodInfo *))v17->klass->vtable._6_Next.methodPtr)(
                                                                      v17,
                                                                      0,
                                                                      LODWORD(voiceIds->max_length),
                                                                      v17->klass->vtable._6_Next.method);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_30;
    v20 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v21 = System_Int32__ToString((int)_4__this + 272, 0);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)System_String__Concat_63457864(
                                                                      (System_String_o *)StringLiteral_12756/*"Servants_"*/,
                                                                      v21,
                                                                      0);
    v23 = _4__this->fields.voiceIds;
    if ( !v23 )
      goto LABEL_30;
    if ( v20 >= LODWORD(v23->max_length) )
      sub_1C2D6F4(this, method, v22);
    v24 = this;
    v25 = v23->m_Items[v20];
    v26 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v26 = SeManager_TypeInfo;
    }
    v27 = (Il2CppObject *)v4->fields.__8__1;
    DEFAULT_VOLUME = v26->static_fields->DEFAULT_VOLUME;
    v29 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v29, v27, Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)SoundManager__playVoice_41296680(
                                                                      (System_String_o *)v24,
                                                                      v25,
                                                                      DEFAULT_VOLUME,
                                                                      v29,
                                                                      0,
                                                                      0);
  }
  v30 = v4->fields.__8__1;
  if ( !v30 )
    goto LABEL_30;
  if ( v30->fields.IsVoiceComp )
  {
LABEL_27:
    ActionExtensions__Call(v4->fields.callback, 0);
    return 0;
  }
  if ( !_4__this || (v31 = _4__this->fields.parentComp) == 0 )
LABEL_30:
    sub_1C2D6EC(this, method);
  if ( v31->fields.isAddRewardEffectSkip )
    goto LABEL_27;
  v4->fields.__2__current = 0;
  v32 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C2D434(v32, 0, v2, v3);
  LODWORD(v32[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleResultItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2AB46 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultItemComponent___c_TypeInfo);
    byte_4C2AB46 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleResultItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultItemComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleResultItemComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleResultItemComponent___c___ctor(BattleResultItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultItemComponent___c___setResultData_b__48_0(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C2D6EC(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_40205568(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_40205960(s->fields.type, 0);
}


bool BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C2D6EC(this, 0);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_40205568(s->fields.type, 0) )
    return 1;
  return Gift__IsCommandCode_40205960(s->fields.type, 0);
}


void BattleResultItemComponent___c__DisplayClass48_0___ctor(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultItemComponent___c__DisplayClass48_0___setResultData_b__1(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        DropUpInfo_o *e,
        const MethodInfo *method)
{
  BattleResultItemComponent___c__DisplayClass48_0_o *v4; // x20
  int32_t itemId; // w19

  v4 = this;
  if ( (byte_4C2AB47 & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    byte_4C2AB47 = 1;
  }
  if ( !e
    || (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)v4->fields.list) == 0
    || (itemId = e->fields.itemId,
        (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v4->fields.i,
                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__)) == 0) )
  {
    sub_1C2D6EC(this, e);
  }
  return itemId == this->fields.i;
}


void BattleResultItemComponent___c__DisplayClass51_0___ctor(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultItemComponent___c__DisplayClass51_0___SetEventInfo_b__0(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        UserEventPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.groupId == this->fields.eventGroupId;
}


void BattleResultItemComponent___c__DisplayClass57_0___ctor(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultItemComponent___c__DisplayClass57_0___PlayVoiceCoroutine_b__0(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  this->fields.IsVoiceComp = 1;
}


void BattleResultItemComponent__itemFlashAnimationCoroutine_d__59___ctor(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__MoveNext(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v5; // x20
  UnityEngine_WaitForSeconds_o *v6; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C2AB4B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C2AB4B = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    dropItem = v2->fields.dropItem;
    v2->fields.__1__state = -1;
    if ( !dropItem )
      goto LABEL_19;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)dropItem->fields.root;
    if ( !this )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    itemIconEffectObj = (UnityEngine_Object_o *)v2->fields.itemIconEffectObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(itemIconEffectObj, 0, 0) )
      goto LABEL_14;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
      if ( this )
      {
        this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)this,
                                                                                   0);
        if ( v2->fields.dropItem )
        {
          v5 = this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v2->fields.dropItem,
                                                                                     0);
          if ( this )
          {
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
            if ( v5 )
            {
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v5, position, 0);
LABEL_14:
              v6 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v6, 0.2333, 0);
              v2->fields.__2__current = (Il2CppObject *)v6;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1C2D434(p__2__current, (int32_t)v6, v8, v9);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C2D6EC(this, method);
  }
  return 0;
}


Il2CppObject *BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_IDisposable_Dispose(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  ;
}