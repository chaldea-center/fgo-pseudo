void __fastcall BattleResultItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct BattleResultItemComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleResultItemComponent_StaticFields *v11; // x0
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B0571A & 1) == 0 )
  {
    sub_1BC3008(&BattleResultItemComponent_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_20136/*"img_bg_total_dp"*/, v4);
    sub_1BC3008(&StringLiteral_2825/*"BATTLE_RESULT_GET_EP"*/, v5);
    sub_1BC3008(&StringLiteral_20137/*"img_bg_total_ep"*/, v6);
    byte_4B0571A = 1;
  }
  BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20137/*"img_bg_total_ep"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleResultItemComponent_TypeInfo->static_fields, StringLiteral_20137/*"img_bg_total_ep"*/, v2, v3);
  v7 = StringLiteral_20136/*"img_bg_total_dp"*/;
  static_fields = BattleResultItemComponent_TypeInfo->static_fields;
  static_fields->DP_SP_BASE_NAME = (struct System_String_o *)StringLiteral_20136/*"img_bg_total_dp"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->DP_SP_BASE_NAME, v7, v9, v10);
  v11 = BattleResultItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&v11->EP_GET_POSY_NORMAL = 3245342720LL;
  *(_QWORD *)&v11->EP_GET_FONT_NORMAL = 0x130000001ALL;
  v12 = StringLiteral_2825/*"BATTLE_RESULT_GET_EP"*/;
  v11->EP_GET_LOCALE_KEY = (struct System_String_o *)StringLiteral_2825/*"BATTLE_RESULT_GET_EP"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v11->EP_GET_LOCALE_KEY, v12, v13, v14);
  BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH = 142;
}


void __fastcall BattleResultItemComponent___ctor(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B05719 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Color___TypeInfo, method);
    byte_4B05719 = 1;
  }
  v3 = (struct UnityEngine_Color_array *)sub_1BC30B0(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.showModeChanButtonLabelEffectColors = v3;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.showModeChanButtonLabelEffectColors, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__AddItemNewLine(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  BattleResultItemComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Object_o *v7; // x20
  int32_t v8; // w24
  int32_t v9; // w21
  BattleResultItemComponent_o *v10; // x22
  struct UILabel_o *getEventPointLabel; // x8
  int v12; // w9
  float v13; // s1
  struct BattleViewItemlistComponent_o *v14; // x8
  int v15; // w20
  int v16; // w21
  float v17; // s9
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B056FD & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (BattleResultItemComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B056FD = 1;
  }
  itemWindow = v2->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_29;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)itemWindow->fields.itemObjectList;
    if ( !this )
      goto LABEL_29;
    if ( v9 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v9,
                                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( this )
    {
      v10 = this;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( this )
      {
        getEventPointLabel = this->fields.getEventPointLabel;
        if ( getEventPointLabel )
        {
          v12 = BYTE5(getEventPointLabel->fields.mGo);
          itemWindow = v2->fields.itemWindow;
          if ( !v12 )
            v8 = v9;
          if ( !v12 )
            v7 = (UnityEngine_Object_o *)v10;
          ++v9;
          if ( itemWindow )
            continue;
        }
      }
    }
    goto LABEL_29;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultItemComponent_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v7 )
    {
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( this )
      {
        *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v14 = v2->fields.itemWindow;
        if ( v14 )
        {
          v15 = 0;
          v16 = v8 + 1;
          v17 = v13 + -113.57;
          do
          {
            this = (BattleResultItemComponent_o *)v14->fields.itemObjectList;
            if ( !this )
              break;
            if ( v16 + v15 >= SLODWORD(this->fields.m_CancellationTokenSource) )
              return;
            this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v16 + v15,
                                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( !this )
              break;
            this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)this,
                                                    0LL);
            if ( !this )
              break;
            v18.fields.x = (float)((float)(v15 % 7) * 110.0) + -22.0;
            v18.fields.y = v17 + (float)((float)(v15 / 7) * -113.57);
            v18.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0LL);
            v14 = v2->fields.itemWindow;
            ++v15;
          }
          while ( v14 );
        }
      }
    }
LABEL_29:
    sub_1BC3264(this, method);
  }
}


void __fastcall BattleResultItemComponent__Close(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4B05710 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleResultItemComponent_endClose__, method);
    sub_1BC3008(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B05710 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v6 = (BattleWindowComponent_EndCall_o *)sub_1BC3254(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattleResultItemComponent_endClose__, 0LL),
        !window) )
  {
    sub_1BC3264(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v6,
    window->klass->vtable._13_CompClose.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__DialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B05706 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, flg);
    sub_1BC3008(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B05706 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1BC3264(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall BattleResultItemComponent__EndCloseDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B05707 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3460/*"CLOSE"*/, method);
    byte_4B05707 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BC3264(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3460/*"CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleResultItemComponent__GetEventPointUpperPriority(
        BattleResultItemComponent_o *this,
        int32_t eventPointUpperId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  BattleResultItemComponent_o *EntitiesFromEventPointUpperId; // x0
  const MethodInfo *v16; // x2
  int32_t v17; // w19
  __int64 v18; // x1
  int32_t key; // w29
  BattleResultItemComponent_o *v20; // x20
  const MethodInfo *v21; // x2
  _BOOL8 IsOpen; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  bool v26; // w21
  signed __int64 i; // x25
  _DWORD *v28; // x8
  int32_t v29; // w22
  int32_t v30; // w24
  int64_t v31; // x23
  int32_t v32; // w22
  int32_t v33; // w24
  int64_t v34; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B05716 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&eventPointUpperId);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, v4);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__,
      v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___get_Current__,
      v8);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Key__, v9);
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_int__List_EventPointUpperReleaseEntity___get_Value__,
      v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B05716 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___)) == 0LL
    || (EntitiesFromEventPointUpperId = (BattleResultItemComponent_o *)EventPointUpperReleaseMaster__GetEntitiesFromEventPointUpperId(
                                                                         (EventPointUpperReleaseMaster_o *)Instance,
                                                                         eventPointUpperId,
                                                                         0LL),
        (Instance = (DataManager_o *)BattleResultItemComponent__GetEventPointUpperReleases(
                                       EntitiesFromEventPointUpperId,
                                       (EventPointUpperReleaseEntity_array *)EntitiesFromEventPointUpperId,
                                       v16)) == 0LL) )
  {
    sub_1BC3264(Instance, v14);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v36,
    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___GetEnumerator__);
  v17 = 0;
  v37 = v36;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v37,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___MoveNext__) )
  {
    if ( !v37.fields._current.fields.value )
      sub_1BC3264(0LL, v18);
    key = (int32_t)v37.fields._current.fields.key;
    v20 = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___ToArray(
                                           (System_Collections_Generic_List_object__o *)v37.fields._current.fields.value,
                                           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__ToArray__);
    IsOpen = BattleResultItemComponent__GetIsAndCondGroup(v20, (EventPointUpperReleaseEntity_array *)v20, v21);
    if ( !v20 )
      sub_1BC3264(IsOpen, v23);
    m_CancellationTokenSource = v20->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v26 = IsOpen;
      for ( i = 0LL; i < (int)m_CancellationTokenSource; ++i )
      {
        if ( i >= (unsigned __int64)(unsigned int)m_CancellationTokenSource )
          sub_1BC326C(IsOpen, v23, v24);
        v28 = (_DWORD *)*((_QWORD *)&v20->fields.parentComp + i);
        if ( v26 )
        {
          if ( !v28 )
            sub_1BC3264(IsOpen, v23);
          v30 = v28[9];
          v29 = v28[10];
          v31 = (int)v28[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v30, v29, v31, 0, 0LL, 0LL);
          if ( !IsOpen )
            goto LABEL_28;
        }
        else
        {
          if ( !v28 )
            sub_1BC3264(IsOpen, v23);
          v33 = v28[9];
          v32 = v28[10];
          v34 = (int)v28[11];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v33, v32, v34, 0, 0LL, 0LL);
          if ( IsOpen )
            break;
          if ( i >= LODWORD(v20->fields.m_CancellationTokenSource) - 1 )
            goto LABEL_28;
        }
        LODWORD(m_CancellationTokenSource) = v20->fields.m_CancellationTokenSource;
      }
    }
    if ( v17 < key )
      v17 = key;
  }
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v37,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_EventPointUpperReleaseEntity___Dispose__);
  return v17;
}


System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *__fastcall BattleResultItemComponent__GetEventPointUpperReleases(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  signed int max_length; // w8
  unsigned int v16; // w24
  EventPointUpperReleaseEntity_o *v17; // x21
  int32_t priority; // w22
  System_Collections_Generic_List_object__o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4B05717 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__,
      entities);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__, v6);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo, v10);
    byte_4B05717 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity____ctor__);
  if ( !entities )
    goto LABEL_18;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BC326C(Item, v13, v14);
      v17 = entities->m_Items[v16];
      if ( !v17 || !v11 )
        break;
      priority = v17->fields.priority;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v11,
              priority,
              (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___ContainsKey__) )
      {
        v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventPointUpperReleaseEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v19,
          (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventPointUpperReleaseEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v11,
          priority,
          (Il2CppObject *)v19,
          (const MethodInfo_3308540 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___set_Item__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v11,
                                                            priority,
                                                            (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v23 = Method_System_Collections_Generic_List_EventPointUpperReleaseEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          (Il2CppObject *)v17,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v17;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v17, v20, v21);
      }
      max_length = entities->max_length;
      if ( (int)++v16 >= max_length )
        return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v11;
    }
LABEL_18:
    sub_1BC3264(Item, v13);
  }
  return (System_Collections_Generic_Dictionary_int__List_EventPointUpperReleaseEntity___o *)v11;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleResultItemComponent__GetEventPointUpperValue(
        BattleResultItemComponent_o *this,
        int32_t priority,
        EventPointUpperEntity_array *entities,
        const MethodInfo *method)
{
  signed int max_length; // w8
  int v7; // w9
  EventPointUpperEntity_o *v8; // x10
  BalanceConfig_c *v9; // x0

  if ( (byte_4B05718 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&priority);
    byte_4B05718 = 1;
  }
  if ( !entities )
LABEL_15:
    sub_1BC3264(this, *(_QWORD *)&priority);
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
        sub_1BC326C(this, *(_QWORD *)&priority, entities);
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


bool __fastcall BattleResultItemComponent__GetIsAndCondGroup(
        BattleResultItemComponent_o *this,
        EventPointUpperReleaseEntity_array *entities,
        const MethodInfo *method)
{
  signed int max_length; // w8
  signed int v4; // w9
  int v5; // w10
  EventPointUpperReleaseEntity_o *v6; // x11
  int condGroup; // w11

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
        sub_1BC326C(this, entities, method);
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
    sub_1BC3264(this, entities);
  }
  v4 = 0;
  return v4 < max_length;
}


bool __fastcall BattleResultItemComponent__GetIsShowEventPointMax(
        BattleResultItemComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        int64_t userEventPoint,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v6; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleResultItemComponent_o *v10; // x21
  struct BattleResultComponent_o *parentComp; // x8
  BattleResultItemComponent_o *EventPointUpperPriority; // x0
  const MethodInfo *v13; // x3

  v6 = this;
  if ( (byte_4B05715 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventPointUpperMaster___, eventDetailEntity);
    this = (BattleResultItemComponent_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B05715 = 1;
  }
  if ( !eventDetailEntity )
    goto LABEL_14;
  if ( !EventDetailEntity__IsEventPointByQp(eventDetailEntity, 0LL) )
    goto LABEL_12;
  this = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventPointUpperMaster___);
  if ( !this )
    goto LABEL_14;
  this = (BattleResultItemComponent_o *)EventPointUpperMaster__GetEntitiesFromEventId(
                                          (EventPointUpperMaster_o *)this,
                                          eventDetailEntity->fields.eventId,
                                          0LL);
  if ( !this )
    return (char)this;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v10 = this;
  if ( !m_CancellationTokenSource )
  {
LABEL_12:
    LOBYTE(this) = 0;
    return (char)this;
  }
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1BC326C(this, eventDetailEntity, v8);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
LABEL_14:
    sub_1BC3264(this, eventDetailEntity);
  EventPointUpperPriority = (BattleResultItemComponent_o *)BattleResultItemComponent__GetEventPointUpperPriority(
                                                             v6,
                                                             *((_DWORD *)&parentComp->fields.UnityEngine_Behaviour_Fields
                                                             + 1),
                                                             v8);
  LOBYTE(this) = BattleResultItemComponent__GetEventPointUpperValue(
                   EventPointUpperPriority,
                   (int32_t)EventPointUpperPriority,
                   (EventPointUpperEntity_array *)v10,
                   v13) <= userEventPoint;
  return (char)this;
}


void __fastcall BattleResultItemComponent__Init(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleWindowComponent_o *window; // x0
  System_String_o *v5; // x20

  if ( (byte_4B056F6 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_2819/*"BATTLE_RESULTITEM_TITLECONF"*/, v3);
    byte_4B056F6 = 1;
  }
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  BattleWindowComponent__setInitData(window, 2, 0.15, 0, 0LL);
  window = this->fields.window;
  if ( !window )
    goto LABEL_14;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))window->klass->vtable._9_setClose.method)(
    window,
    window->klass->vtable._10_Open.methodPtr);
  window = (BattleWindowComponent_o *)this->fields.itemDialog;
  if ( !window )
    goto LABEL_14;
  ItemDetailInfoComponent__Init((ItemDetailInfoComponent_o *)window, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2819/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL);
  if ( !window )
    goto LABEL_14;
  v5 = (System_String_o *)window;
  if ( !System_String__Equals_62383952((System_String_o *)window, (System_String_o *)StringLiteral_2819/*"BATTLE_RESULTITEM_TITLECONF"*/, 0LL) )
  {
    window = (BattleWindowComponent_o *)this->fields.titleConfLabel;
    if ( !window )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)window, v5, 0LL);
  }
  window = (BattleWindowComponent_o *)this->fields.touchNextRoot;
  if ( !window )
LABEL_14:
    sub_1BC3264(window, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


void __fastcall BattleResultItemComponent__OnClickSwitchShowMode(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *showModeChangeButton; // x0
  __int64 *v10; // x8
  __int64 v11; // x2
  struct UnityEngine_Color_array *showModeChanButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B05713 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleResultItemComponent_OnClickSwitchShowMode__, method);
    sub_1BC3008(&StringLiteral_17296/*"btn_bg_20"*/, v3);
    sub_1BC3008(&StringLiteral_17297/*"btn_bg_21"*/, v4);
    byte_4B05713 = 1;
  }
  v5 = Method_BattleResultItemComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BC3020(Method_BattleResultItemComponent_OnClickSwitchShowMode__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  showModeChangeButton = this->fields.showModeChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !showModeChangeButton
    || (isShowPossessionNum ? (v10 = &StringLiteral_17296/*"btn_bg_20"*/) : (v10 = &StringLiteral_17297/*"btn_bg_21"*/),
        UIButton__set_normalSprite(showModeChangeButton, (System_String_o *)*v10, 0LL),
        (showModeChanButtonLabelEffectColors = this->fields.showModeChanButtonLabelEffectColors) == 0LL) )
  {
LABEL_18:
    sub_1BC3264(showModeChangeButton, v7);
  }
  showModeChangeButton = (UIButton_o *)this->fields.showModeChangeButtonLabel;
  max_length = showModeChanButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &showModeChanButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &showModeChanButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &showModeChanButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &showModeChanButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !showModeChangeButton )
        goto LABEL_18;
      goto LABEL_16;
    }
LABEL_19:
    sub_1BC326C(showModeChangeButton, v7, v11);
  }
  if ( max_length <= 1 )
    goto LABEL_19;
  p_g = &showModeChanButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &showModeChanButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &showModeChanButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &showModeChanButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !showModeChangeButton )
    goto LABEL_18;
LABEL_16:
  v18.fields.a = *p_r;
  v18.fields.b = *p_a;
  v18.fields.g = *p_b;
  v18.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)showModeChangeButton, v18, 0LL);
  showModeChangeButton = (UIButton_o *)this->fields.itemWindow;
  if ( !showModeChangeButton )
    goto LABEL_18;
  BattleViewItemlistComponent__SwitchShowNumMode(
    (BattleViewItemlistComponent_o *)showModeChangeButton,
    this->fields.isShowPossessionNum,
    0LL);
}


void __fastcall BattleResultItemComponent__Open(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *touchNextRoot; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  const MethodInfo *v9; // x1

  if ( (byte_4B056F7 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleResultItemComponent_endOpen__, method);
    sub_1BC3008(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_1BC3008(&StringLiteral_5403/*"END_OPEN"*/, v5);
    byte_4B056F7 = 1;
  }
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(touchNextRoot, 1, 0LL);
  touchNextRoot = this->fields.touchNextRoot;
  if ( !touchNextRoot
    || (touchNextRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      touchNextRoot,
                                                      (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___)) == 0LL
    || (UIWidget__set_depth((UIWidget_o *)touchNextRoot, 200, 0LL),
        (touchNextRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchNextRoot, (System_String_o *)StringLiteral_5403/*"END_OPEN"*/, 0LL),
        window = this->fields.window,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1BC3254(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattleResultItemComponent_endOpen__, 0LL),
        !window) )
  {
LABEL_9:
    sub_1BC3264(touchNextRoot, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v8,
    window->klass->vtable._11_CompOpen.methodPtr);
  BattleResultItemComponent__setCondensedScale(this, v9);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B05702 & 1) == 0 )
  {
    sub_1BC3008(&BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo, method);
    byte_4B05702 = 1;
  }
  v3 = sub_1BC3254(BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__PlayVoiceCoroutine(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B05701 & 1) == 0 )
  {
    sub_1BC3008(&BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo, callback);
    byte_4B05701 = 1;
  }
  v5 = sub_1BC3254(BattleResultItemComponent__PlayVoiceCoroutine_d__57_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 48), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleResultItemComponent__SetAddItemIconEffect(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleResultItemComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  int32_t size; // w8
  int v18; // w22
  int v19; // w23
  Il2CppObject *v20; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  struct BattleViewItemlistComponent_o *v26; // x8
  int32_t v27; // w28
  Il2CppObject *v28; // x20
  int32_t v29; // w21
  struct UILabel_o *getEventPointLabel; // x8
  BattleResultItemComponent_o *v31; // x23
  BattleResultItemComponent_o *v32; // x24
  BattleResultItemComponent_o *v33; // x25
  __int64 v34; // x1
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t animationSvtId; // [xsp+8h] [xbp-68h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-64h] BYREF

  v5 = this;
  if ( (byte_4B056FF & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, method);
    sub_1BC3008(&AssetManager_TypeInfo, v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v7);
    sub_1BC3008(&int_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_18620/*"ef_additem"*/, v13);
    this = (BattleResultItemComponent_o *)sub_1BC3008(&StringLiteral_5801/*"Effect/BattleResult/{0}/{1}"*/, v14);
    byte_4B056FF = 1;
  }
  itemWindow = v5->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_30;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_30;
  size = itemObjectList->fields._size;
  g_eventId = v5->fields.g_eventId;
  v18 = 7 * (size / 7);
  if ( size == v18 )
    v19 = -21;
  else
    v19 = -14;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4);
  animationSvtId = v5->fields.animationSvtId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v21, v22, v23);
  v25 = System_String__Format_62389940((System_String_o *)StringLiteral_5801/*"Effect/BattleResult/{0}/{1}"*/, v20, v24, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleResultItemComponent_o *)AssetManager__getAssetStorage(v25, 0LL);
  if ( !this
    || (this = (BattleResultItemComponent_o *)AssetData__GetObject_object__50213776(
                                                (AssetData_o *)this,
                                                (System_String_o *)StringLiteral_18620/*"ef_additem"*/,
                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672),
        (v26 = v5->fields.itemWindow) == 0LL) )
  {
LABEL_30:
    sub_1BC3264(this, method);
  }
  v27 = v19 + v18;
  v28 = (Il2CppObject *)this;
  v29 = 0;
  while ( 1 )
  {
    this = (BattleResultItemComponent_o *)v26->fields.itemObjectList;
    if ( !this )
      goto LABEL_30;
    if ( v29 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      break;
    if ( v27 <= v29 )
    {
      this = (BattleResultItemComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v29,
                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_30;
      this = (BattleResultItemComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
      if ( !this )
        goto LABEL_30;
      getEventPointLabel = this->fields.getEventPointLabel;
      v31 = this;
      if ( !getEventPointLabel )
        goto LABEL_30;
      if ( BYTE5(getEventPointLabel->fields.mGo) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleResultItemComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                v28,
                                                (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_30;
        v32 = this;
        this = (BattleResultItemComponent_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
        if ( !this )
          goto LABEL_30;
        v33 = this;
        UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v5->fields.effectRoot, 0LL);
        if ( !byte_4AFBDB1 )
        {
          sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v34);
          byte_4AFBDB1 = 1;
        }
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v33,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( !byte_4AFBDB6 )
        {
          sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v35);
          byte_4AFBDB6 = 1;
        }
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v33,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v32, 0, 0LL);
        v31->fields.eventPointMaxSprite = (struct UISprite_o *)v32;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v31->fields.eventPointMaxSprite, (int32_t)v32, v36, v37);
      }
    }
    v26 = v5->fields.itemWindow;
    ++v29;
    if ( !v26 )
      goto LABEL_30;
  }
}


void __fastcall BattleResultItemComponent__SetAddItemSvtAnimation(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v19; // x1
  Il2CppObject *Object_object__50213776; // x20
  UnityEngine_GameObject_o *v21; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  UnityEngine_Transform_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t animationSvtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t g_eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B056FE & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, method);
    sub_1BC3008(&AssetManager_TypeInfo, v6);
    sub_1BC3008(&int_TypeInfo, v7);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_18676/*"ef_presenter"*/, v10);
    sub_1BC3008(&StringLiteral_5801/*"Effect/BattleResult/{0}/{1}"*/, v11);
    byte_4B056FE = 1;
  }
  g_eventId = this->fields.g_eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &g_eventId, v2, v3, v4);
  animationSvtId = this->fields.animationSvtId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationSvtId, v13, v14, v15);
  v17 = System_String__Format_62389940((System_String_o *)StringLiteral_5801/*"Effect/BattleResult/{0}/{1}"*/, v12, v16, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v17, 0LL);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              AssetStorage,
                              (System_String_o *)StringLiteral_18676/*"ef_presenter"*/,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                  Object_object__50213776,
                                  (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !AssetStorage
    || (v21 = (UnityEngine_GameObject_o *)AssetStorage,
        AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AssetStorage,
                                        0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (v23 = (UnityEngine_Transform_o *)AssetStorage) == 0LL )
  {
LABEL_16:
    sub_1BC3264(AssetStorage, v19);
  }
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)AssetStorage, itemWindow->fields.listRoot, 0LL);
  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v24);
    byte_4AFBDB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v25);
    byte_4AFBDB6 = 1;
  }
  UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UnityEngine_GameObject__SetActive(v21, 0, 0LL);
  this->fields.addItemSvtAnimationObj = v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.addItemSvtAnimationObj, (int32_t)v21, v26, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__SetEventInfo(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v43; // x1
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v45; // x21
  __int64 v46; // x2
  __int64 v47; // x8
  UserEventPointEntity_o *v48; // x8
  int32_t v49; // w26
  int64_t EventPointNoGroup; // x0
  __int64 v51; // x8
  EventConquestInfo_o *v52; // x23
  Il2CppObject *v53; // x21
  EventConquestInfo_o *v54; // x8
  int64_t getNum; // x21
  int64_t MasterName_k__BackingField_high; // x22
  int32_t ImageId; // w4
  const MethodInfo *v58; // x7
  BattleResultItemComponent_o *v59; // x0
  int32_t v60; // w1
  int64_t v61; // x2
  int64_t v62; // x3
  bool IsShowEventPointMax; // w5
  int32_t v64; // w6
  Il2CppObject *MasterData_object; // x0
  UserEventRaidMaster_o *v66; // x22
  UnityEngine_Object_o *rootEventDamagePoint; // x23
  int64_t TotalDamagePoint; // x20
  BalanceConfig_c *v69; // x8
  int64_t UserRaidDamagePointMax; // x22
  int64_t v71; // x20
  int64_t v72; // x0
  UILabel_o *getEventDamagePointLabel; // x22
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x0
  UILabel_o *nowEventDamagePointLabel; // x22
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  BattleResultItemComponent_c *v83; // x0
  System_String_o *DP_SP_BASE_NAME; // x20
  System_String_o *v85; // x0
  struct UISprite_o *eventDamageBGSprite; // x8
  Il2CppObject *v87; // x20
  BattleResultItemComponent_c *v88; // x0
  UISprite_o *eventDamageIconSprite; // x20
  int32_t pointImageId; // w21
  int64_t v91; // x25
  System_Func_object__bool__o *v92; // x27
  __int64 v93; // x27
  const MethodInfo *v94; // x3
  UserEventPointEntity_o *v95; // x8
  int64_t v96; // x26
  UserEventPointEntity_o *v97; // x8
  int32_t v98; // w23
  int64_t v99; // [xsp+8h] [xbp-78h] BYREF
  int64_t v100; // [xsp+10h] [xbp-70h] BYREF
  int32_t v101; // [xsp+1Ch] [xbp-64h] BYREF

  v101 = eventId;
  if ( (byte_4B056FB & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&BalanceConfig_TypeInfo, v18);
    sub_1BC3008(&BattleResultItemComponent_TypeInfo, v19);
    sub_1BC3008(&Method_BetterList_string__Contains__, v20);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v21);
    sub_1BC3008(&Method_DataManager_GetMaster_EventDetailMaster___, v22);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v23);
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, v24);
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, v25);
    sub_1BC3008(&DataManager_TypeInfo, v26);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v27);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v28);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v29);
    sub_1BC3008(&Method_System_Linq_Enumerable_First_UserEventPointEntity___, v30);
    sub_1BC3008(&System_Func_UserEventPointEntity__bool__TypeInfo, v31);
    sub_1BC3008(&long_TypeInfo, v32);
    sub_1BC3008(&System_Math_TypeInfo, v33);
    sub_1BC3008(&NetworkManager_TypeInfo, v34);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v35);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_1BC3008(&Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__, v37);
    sub_1BC3008(&BattleResultItemComponent___c__DisplayClass51_0_TypeInfo, v38);
    sub_1BC3008(&StringLiteral_24811/*"{0:#,0}"*/, v39);
    sub_1BC3008(&StringLiteral_799/*"+ {0:#,0}"*/, v40);
    byte_4B056FB = 1;
  }
  v41 = sub_1BC3254(BattleResultItemComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_92;
  *(_DWORD *)(v41 + 16) = eventGroupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_92;
  if ( !DataMasterBase_object__object__int___GetEntity(
          Master_object,
          eventId,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_92;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             eventId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v45 = (EventDetailEntity_o *)Entity;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsEventPoint(
                                                                  (EventDetailEntity_o *)Entity,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsMakeFarm(v45, 0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return;
  }
  if ( isNotDisplayEventPoint )
    return;
  if ( !oldUserPoint || (v47 = *(_QWORD *)&oldUserPoint->max_length) == 0 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsMakeFarm(v45, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !eventConquestInfos )
        return;
      v51 = *(_QWORD *)&eventConquestInfos->max_length;
      if ( !v51 )
        return;
      if ( !(_DWORD)v51 )
        goto LABEL_93;
      v52 = eventConquestInfos->m_Items[0];
      if ( !v52 || v52->fields.rewardNum < 1 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v53 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v43);
        byte_4AFC1F1 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      }
      if ( v53 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__GetEntityDefinitely(
                                                                        (UserItemMaster_o *)v53,
                                                                        (int64_t)Master_object[2].fields.list[1].monitor,
                                                                        v52->fields.objectId,
                                                                        0LL);
        if ( !eventConquestInfos->max_length )
          goto LABEL_93;
        v54 = eventConquestInfos->m_Items[0];
        if ( v54 )
        {
          if ( Master_object )
          {
            getNum = v54->fields.getNum;
            MasterName_k__BackingField_high = SHIDWORD(Master_object->fields._MasterName_k__BackingField);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              Master_object,
                                                                              v52->fields.objectId,
                                                                              (const MethodInfo_32AF070 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              if ( Master_object )
              {
                ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0LL);
                v59 = this;
                v60 = eventId;
                v61 = getNum;
                v62 = MasterName_k__BackingField_high;
                IsShowEventPointMax = 0;
                v64 = 0;
LABEL_91:
                BattleResultItemComponent__SetEventPointUi(v59, v60, v61, v62, ImageId, IsShowEventPointMax, v64, v58);
                return;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( (addDamagePoint & 0x8000000000000000LL) != 0 )
        return;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_92;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Master_object,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
      if ( !MasterData_object )
        return;
      v66 = (UserEventRaidMaster_o *)MasterData_object;
      rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(rootEventDamagePoint, 0LL, 0LL) )
        return;
      TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(v66, eventId, 0LL);
      v69 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v69 = BalanceConfig_TypeInfo;
      }
      UserRaidDamagePointMax = v69->static_fields->UserRaidDamagePointMax;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v71 = System_Math__Min_63871024(TotalDamagePoint, UserRaidDamagePointMax, 0LL);
      v72 = System_Math__Min_63871024(
              addDamagePoint,
              BalanceConfig_TypeInfo->static_fields->UserRaidDamagePointMax,
              0LL);
      getEventDamagePointLabel = this->fields.getEventDamagePointLabel;
      v100 = v72;
      v77 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v100, v74, v75, v76);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                      (System_String_o *)StringLiteral_799/*"+ {0:#,0}"*/,
                                                                      v77,
                                                                      0LL);
      if ( getEventDamagePointLabel )
      {
        UILabel__set_text(getEventDamagePointLabel, (System_String_o *)Master_object, 0LL);
        nowEventDamagePointLabel = this->fields.nowEventDamagePointLabel;
        v99 = v71;
        v82 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v99, v79, v80, v81);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)StringLiteral_24811/*"{0:#,0}"*/,
                                                                        v82,
                                                                        0LL);
        if ( nowEventDamagePointLabel )
        {
          UILabel__set_text(nowEventDamagePointLabel, (System_String_o *)Master_object, 0LL);
          v83 = BattleResultItemComponent_TypeInfo;
          if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
            v83 = BattleResultItemComponent_TypeInfo;
          }
          DP_SP_BASE_NAME = v83->static_fields->DP_SP_BASE_NAME;
          v85 = System_Int32__ToString((int32_t)&v101, 0LL);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_62348648(
                                                                          DP_SP_BASE_NAME,
                                                                          v85,
                                                                          0LL);
          eventDamageBGSprite = this->fields.eventDamageBGSprite;
          if ( eventDamageBGSprite )
          {
            v87 = (Il2CppObject *)Master_object;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageBGSprite->fields.mAtlas;
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UIAtlas__GetListOfSprites(
                                                                              (UIAtlas_o *)Master_object,
                                                                              0LL);
              if ( Master_object )
              {
                if ( !BetterList_object___Contains(
                        (BetterList_T__o *)Master_object,
                        v87,
                        (const MethodInfo_322AAB0 *)Method_BetterList_string__Contains__) )
                {
                  v88 = BattleResultItemComponent_TypeInfo;
                  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
                    v88 = BattleResultItemComponent_TypeInfo;
                  }
                  v87 = (Il2CppObject *)v88->static_fields->DP_SP_BASE_NAME;
                }
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventDamageBGSprite;
                if ( Master_object )
                {
                  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)v87, 0LL);
                  eventDamageIconSprite = this->fields.eventDamageIconSprite;
                  pointImageId = v45->fields.pointImageId;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetItem(eventDamageIconSprite, pointImageId, 0LL);
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.rootEventDamagePoint;
                  if ( Master_object )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
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
    sub_1BC3264(Master_object, v43);
  }
  if ( !(_DWORD)v47 )
    goto LABEL_93;
  v48 = oldUserPoint->m_Items[0];
  if ( !v48 )
    goto LABEL_92;
  v49 = *(_DWORD *)(v41 + 16);
  if ( v49 > 0 || !v48->fields.groupId )
  {
    if ( v49 <= 0 )
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
    else
      EventPointNoGroup = UserEventPointMaster__GetEventPoint(eventId, v49, 0LL);
    v91 = EventPointNoGroup;
    v92 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserEventPointEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v92,
      (Il2CppObject *)v41,
      Method_BattleResultItemComponent___c__DisplayClass51_0__SetEventInfo_b__0__,
      0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__First_object__50483400(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)oldUserPoint,
                                                                    (System_Func_TSource__bool__o *)v92,
                                                                    (const MethodInfo_30250C8 *)Method_System_Linq_Enumerable_First_UserEventPointEntity___);
    if ( v49 <= 0 )
    {
      if ( !oldUserPoint->max_length )
        goto LABEL_93;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)oldUserPoint->m_Items[0];
      if ( !Master_object )
        goto LABEL_92;
    }
    else if ( !Master_object )
    {
      goto LABEL_92;
    }
    v93 = v91 - *(_QWORD *)&Master_object->fields.revision;
    if ( v91 <= 0 && v93 < 1 )
      return;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__IsEventPointByQp(v45, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !oldUserPoint->max_length )
        goto LABEL_93;
      v95 = oldUserPoint->m_Items[0];
      if ( !v95 )
        goto LABEL_92;
      v96 = v95->fields.value + countQp;
      if ( BattleResultItemComponent__GetIsShowEventPointMax(this, v45, v91, v94) )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleResultItemComponent__GetIsShowEventPointMax(
                                                                        this,
                                                                        v45,
                                                                        v96,
                                                                        v94);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          v96 = v91;
        if ( oldUserPoint->max_length )
        {
          v97 = oldUserPoint->m_Items[0];
          if ( !v97 )
            goto LABEL_92;
          v93 = v96 - v97->fields.value;
          goto LABEL_90;
        }
LABEL_93:
        sub_1BC326C(Master_object, v43, v46);
      }
      v93 = countQp;
    }
    else
    {
      v96 = v91;
    }
LABEL_90:
    v98 = v45->fields.pointImageId;
    IsShowEventPointMax = BattleResultItemComponent__GetIsShowEventPointMax(this, v45, v96, v94);
    v59 = this;
    v60 = eventId;
    v61 = v93;
    v62 = v96;
    ImageId = v98;
    v64 = boostRate;
    goto LABEL_91;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__SetEventPointUi(
        BattleResultItemComponent_o *this,
        int32_t eventId,
        int64_t addEventPoint,
        int64_t totalEventPoint,
        int32_t imageId,
        bool isEventPointMax,
        int32_t boostRate,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  UILabel_o *getEventPointLabel; // x25
  Il2CppObject *v26; // x0
  System_String_o *IfExists; // x0
  System_String_o *v28; // x1
  UILabel_o *nowEventPointLabel; // x24
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UISprite_o *eventIconSprite; // x23
  UILabel_o *getTitleLabel; // x22
  __int64 v36; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  BattleResultItemComponent_c *v38; // x8
  UnityEngine_GameObject_o *v39; // x22
  struct BattleResultItemComponent_StaticFields *static_fields; // x8
  __int64 v41; // x9
  UILabel_o *v42; // x22
  __int64 v43; // x0
  BattleResultItemComponent_c *v44; // x8
  __int64 v45; // x23
  System_String_o *EP_GET_LOCALE_KEY; // x24
  System_String_o *v47; // x0
  __int64 v48; // x2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  struct System_String_o *v51; // x1
  UILabel_o *getBoostLabel; // x22
  System_String_o *v53; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  BattleResultItemComponent_c *v58; // x0
  System_String_o *EP_SP_BASE_NAME; // x21
  System_String_o *v60; // x0
  struct UISprite_o *eventPointBgSprite; // x8
  Il2CppObject *v62; // x21
  BattleResultItemComponent_c *v63; // x0
  UnityEngine_Object_o *eventPointMaxSprite; // x21
  int64_t v65; // [xsp+8h] [xbp-68h] BYREF
  int64_t v66; // [xsp+10h] [xbp-60h] BYREF
  int32_t v67; // [xsp+1Ch] [xbp-54h] BYREF

  v67 = eventId;
  if ( (byte_4B056FC & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&BattleResultItemComponent_TypeInfo, v14);
    sub_1BC3008(&Method_BetterList_string__Contains__, v15);
    sub_1BC3008(&long_TypeInfo, v16);
    sub_1BC3008(&LocalizationManager_TypeInfo, v17);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v18);
    sub_1BC3008(&float_TypeInfo, v19);
    sub_1BC3008(&string___TypeInfo, v20);
    sub_1BC3008(&StringLiteral_2826/*"BATTLE_RESULT_GET_EP_RATE"*/, v21);
    sub_1BC3008(&StringLiteral_24811/*"{0:#,0}"*/, v22);
    sub_1BC3008(&StringLiteral_1/*""*/, v23);
    sub_1BC3008(&StringLiteral_799/*"+ {0:#,0}"*/, v24);
    byte_4B056FC = 1;
  }
  getEventPointLabel = this->fields.getEventPointLabel;
  v66 = addEventPoint;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v66, addEventPoint, totalEventPoint, *(_QWORD *)&imageId);
  IfExists = System_String__Format((System_String_o *)StringLiteral_799/*"+ {0:#,0}"*/, v26, 0LL);
  if ( !getEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(getEventPointLabel, IfExists, 0LL);
  nowEventPointLabel = this->fields.nowEventPointLabel;
  v65 = totalEventPoint;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v65, v30, v31, v32);
  IfExists = System_String__Format((System_String_o *)StringLiteral_24811/*"{0:#,0}"*/, v33, 0LL);
  if ( !nowEventPointLabel )
    goto LABEL_49;
  UILabel__set_text(nowEventPointLabel, IfExists, 0LL);
  CommonFunction__ScalingLabelWidth(this->fields.getEventPointLabel, 215, 0LL);
  CommonFunction__ScalingLabelWidth(this->fields.nowEventPointLabel, 215, 0LL);
  eventIconSprite = this->fields.eventIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(eventIconSprite, imageId, 0LL);
  IfExists = (System_String_o *)BattleResultItemComponent_TypeInfo;
  getTitleLabel = this->fields.getTitleLabel;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
  if ( !getTitleLabel )
    goto LABEL_49;
  v36 = 24LL;
  if ( boostRate > 0 )
    v36 = 28LL;
  UILabel__set_fontSize(
    getTitleLabel,
    *(_DWORD *)((char *)&BattleResultItemComponent_TypeInfo->static_fields->EP_SP_BASE_NAME + v36),
    0LL);
  IfExists = (System_String_o *)this->fields.getTitleLabel;
  if ( !IfExists )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0LL);
  v38 = BattleResultItemComponent_TypeInfo;
  v39 = gameObject;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v38 = BattleResultItemComponent_TypeInfo;
  }
  static_fields = v38->static_fields;
  v41 = 16LL;
  if ( boostRate > 0 )
    v41 = 20LL;
  GameObjectExtensions__SetLocalPositionY(v39, *(float *)((char *)&static_fields->EP_SP_BASE_NAME + v41), 0LL);
  v42 = this->fields.getTitleLabel;
  v43 = sub_1BC30B0(string___TypeInfo, 2LL);
  v44 = BattleResultItemComponent_TypeInfo;
  v45 = v43;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v44 = BattleResultItemComponent_TypeInfo;
  }
  EP_GET_LOCALE_KEY = v44->static_fields->EP_GET_LOCALE_KEY;
  v47 = System_Int32__ToString((int32_t)&v67, 0LL);
  IfExists = System_String__Concat_62348648(EP_GET_LOCALE_KEY, v47, 0LL);
  if ( !v45 )
    goto LABEL_49;
  if ( !*(_DWORD *)(v45 + 24)
    || (*(_QWORD *)(v45 + 32) = IfExists,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 32), (int32_t)IfExists, v48, v49),
        *(_DWORD *)(v45 + 24) <= 1u) )
  {
    sub_1BC326C(IfExists, v28, v48);
  }
  v51 = BattleResultItemComponent_TypeInfo->static_fields->EP_GET_LOCALE_KEY;
  *(_QWORD *)(v45 + 40) = v51;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 40), (int32_t)v51, v48, v50);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v45, 0LL);
  if ( !v42 )
LABEL_49:
    sub_1BC3264(IfExists, v28);
  UILabel__set_text(v42, IfExists, 0LL);
  getBoostLabel = this->fields.getBoostLabel;
  if ( boostRate <= 0 )
  {
    v28 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2826/*"BATTLE_RESULT_GET_EP_RATE"*/, 0LL);
    *(float *)&v66 = (float)((float)boostRate / 1000.0) + 1.0;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v66, v54, v55, v56);
    IfExists = System_String__Format(v53, v57, 0LL);
    v28 = IfExists;
    if ( !getBoostLabel )
      goto LABEL_49;
  }
  UILabel__set_text(getBoostLabel, v28, 0LL);
  v58 = BattleResultItemComponent_TypeInfo;
  if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
    v58 = BattleResultItemComponent_TypeInfo;
  }
  EP_SP_BASE_NAME = v58->static_fields->EP_SP_BASE_NAME;
  v60 = System_Int32__ToString((int32_t)&v67, 0LL);
  IfExists = System_String__Concat_62348648(EP_SP_BASE_NAME, v60, 0LL);
  eventPointBgSprite = this->fields.eventPointBgSprite;
  if ( !eventPointBgSprite )
    goto LABEL_49;
  v62 = (Il2CppObject *)IfExists;
  IfExists = (System_String_o *)eventPointBgSprite->fields.mAtlas;
  if ( !IfExists )
    goto LABEL_49;
  IfExists = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)IfExists, 0LL);
  if ( !IfExists )
    goto LABEL_49;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)IfExists,
          v62,
          (const MethodInfo_322AAB0 *)Method_BetterList_string__Contains__) )
  {
    v63 = BattleResultItemComponent_TypeInfo;
    if ( !BattleResultItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultItemComponent_TypeInfo);
      v63 = BattleResultItemComponent_TypeInfo;
    }
    v62 = (Il2CppObject *)v63->static_fields->EP_SP_BASE_NAME;
  }
  IfExists = (System_String_o *)this->fields.eventPointBgSprite;
  if ( !IfExists )
    goto LABEL_49;
  UISprite__set_spriteName((UISprite_o *)IfExists, (System_String_o *)v62, 0LL);
  eventPointMaxSprite = (UnityEngine_Object_o *)this->fields.eventPointMaxSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventPointMaxSprite, 0LL, 0LL) )
  {
    IfExists = (System_String_o *)this->fields.eventPointMaxSprite;
    if ( !IfExists )
      goto LABEL_49;
    IfExists = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IfExists, 0LL);
    if ( !IfExists )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, isEventPointMax, 0LL);
  }
  IfExists = (System_String_o *)this->fields.rootEventPoint;
  if ( !IfExists )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IfExists, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__SetGroupEventRoot(
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
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 0, 0LL),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0LL)
    || (nomalRootObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalRootObj, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(nomalRootObj, 1, 0LL), !userGame)
    || (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0LL
    || (BattleResultEventItemGroupComponent__SetQpInfo(
          (BattleResultEventItemGroupComponent_o *)nomalRootObj,
          userGame->fields.qp - conquestRewardQp,
          countQp,
          v17),
        (nomalRootObj = (UnityEngine_GameObject_o *)this->fields.groupRootObj) == 0LL) )
  {
    sub_1BC3264(nomalRootObj, *(_QWORD *)&eventId);
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
void __fastcall BattleResultItemComponent__SetNormalRoot(
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UnityEngine_Component_o *groupRootObj; // x0
  UILabel_o *getQpLabel; // x27
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int64_t qp; // x28
  int64_t QpMax; // x8
  int64_t v38; // x26
  UILabel_o *nowQpLabel; // x25
  Il2CppObject *v40; // x0
  UnityEngine_Object_o *rootEventDamagePoint; // x25
  const MethodInfo *v42; // [xsp+8h] [xbp-78h]
  int64_t v43; // [xsp+10h] [xbp-70h] BYREF
  int32_t v44; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B056FA & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&int_TypeInfo, v22);
    sub_1BC3008(&long_TypeInfo, v23);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v24);
    sub_1BC3008(&StringLiteral_24811/*"{0:#,0}"*/, v25);
    sub_1BC3008(&StringLiteral_799/*"+ {0:#,0}"*/, v26);
    byte_4B056FA = 1;
  }
  groupRootObj = (UnityEngine_Component_o *)this->fields.groupRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  groupRootObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(groupRootObj, 0LL);
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
  groupRootObj = (UnityEngine_Component_o *)this->fields.nomalRootObj;
  if ( !groupRootObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 1, 0LL);
  getQpLabel = this->fields.getQpLabel;
  v44 = countQp;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v29, v30, v31);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_799/*"+ {0:#,0}"*/, v32, 0LL);
  if ( !getQpLabel )
    goto LABEL_30;
  UILabel__set_text(getQpLabel, (System_String_o *)groupRootObj, 0LL);
  if ( !userGame )
    goto LABEL_30;
  qp = userGame->fields.qp;
  groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  }
  QpMax = *(_QWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 8LL);
  if ( qp >= QpMax )
  {
    if ( !oldGame )
      goto LABEL_30;
    v38 = oldGame->fields.qp + countQp;
    if ( v38 < 0 )
      goto LABEL_33;
    if ( !LODWORD(groupRootObj[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(groupRootObj);
      groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v38 > QpMax )
    {
LABEL_33:
      if ( !LODWORD(groupRootObj[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(groupRootObj);
        groupRootObj = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      v38 = *(_QWORD *)(*(_QWORD *)&groupRootObj[7].fields.m_CachedPtr + 8LL);
    }
  }
  else
  {
    v38 = userGame->fields.qp - (firstClearRewardQp + (__int64)conquestRewardQp);
  }
  nowQpLabel = this->fields.nowQpLabel;
  v43 = v38;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v43, v33, v34, v35);
  groupRootObj = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_24811/*"{0:#,0}"*/, v40, 0LL);
  if ( !nowQpLabel
    || (UILabel__set_text(nowQpLabel, (System_String_o *)groupRootObj, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.getQpLabel, 215, 0LL),
        CommonFunction__ScalingLabelWidth(this->fields.nowQpLabel, 215, 0LL),
        (groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventPoint) == 0LL) )
  {
LABEL_30:
    sub_1BC3264(groupRootObj, *(_QWORD *)&eventId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
  rootEventDamagePoint = (UnityEngine_Object_o *)this->fields.rootEventDamagePoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rootEventDamagePoint, 0LL, 0LL) )
  {
    groupRootObj = (UnityEngine_Component_o *)this->fields.rootEventDamagePoint;
    if ( groupRootObj )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)groupRootObj, 0, 0LL);
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
      v42);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__StartPresenterAnimation(
        BattleResultItemComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *addItemSvtAnimationObj; // x0
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s10
  float v12; // s8
  float v13; // s9
  const MethodInfo *v14; // x2
  struct BattleViewItemlistComponent_o *v15; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s8
  float v21; // s10
  float v22; // s9
  System_Collections_IEnumerator_o *v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B05700 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, callback);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5);
    byte_4B05700 = 1;
  }
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(addItemSvtAnimationObj, 1, 0LL);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)itemWindow->fields.itemObjectList;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)addItemSvtAnimationObj,
                                                         LODWORD(addItemSvtAnimationObj[1].klass) - 1,
                                                         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(
                                    (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                    0LL);
  addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v11 = v8;
  v12 = v9;
  v13 = v10;
  addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         addItemSvtAnimationObj,
                                                         0LL);
  if ( !addItemSvtAnimationObj )
    goto LABEL_19;
  v24.fields.y = v12;
  v24.fields.z = v13;
  v24.fields.x = v11 + 0.05;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)addItemSvtAnimationObj, v24, 0LL);
  v15 = this->fields.itemWindow;
  if ( !v15 )
    goto LABEL_19;
  itemObjectList = v15->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_19;
  if ( itemObjectList->fields._size >= 8 )
  {
    addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
    if ( addItemSvtAnimationObj )
    {
      addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             addItemSvtAnimationObj,
                                                             0LL);
      if ( addItemSvtAnimationObj )
      {
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)addItemSvtAnimationObj,
                                           0LL);
        addItemSvtAnimationObj = this->fields.addItemSvtAnimationObj;
        if ( addItemSvtAnimationObj )
        {
          v20 = v17;
          v21 = v18;
          v22 = v19;
          addItemSvtAnimationObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                 addItemSvtAnimationObj,
                                                                 0LL);
          if ( addItemSvtAnimationObj )
          {
            v25.fields.y = v21 + 9.0;
            v25.fields.x = v20;
            v25.fields.z = v22;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)addItemSvtAnimationObj, v25, 0LL);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_19:
    sub_1BC3264(addItemSvtAnimationObj, callback);
  }
LABEL_18:
  v23 = BattleResultItemComponent__PlayVoiceCoroutine(this, callback, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__commandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B0570E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, flg);
    sub_1BC3008(&Method_BattleResultItemComponent_EndCloseDialogCallBack__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B0570E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultItemComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    sub_1BC3264(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall BattleResultItemComponent__endClose(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4B05711 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_5408/*"END_PROC"*/, method);
    byte_4B05711 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BC3264(gameObject, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5408/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endCommandCodeDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B0570F & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3460/*"CLOSE"*/, method);
    byte_4B0570F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BC3264(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3460/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endItemDialogCallBack(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B0570B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3460/*"CLOSE"*/, method);
    byte_4B0570B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BC3264(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3460/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__endOpen(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B056F8 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9182/*"NEXT"*/, method);
    byte_4B056F8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm
    || (PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9182/*"NEXT"*/, 0LL),
        (myFsm = (PlayMakerFSM_o *)this->fields.itemWindow) == 0LL) )
  {
    sub_1BC3264(myFsm, method);
  }
  BattleViewItemlistComponent__setShow((BattleViewItemlistComponent_o *)myFsm, 0LL);
}


BattleDropItem_o *__fastcall BattleResultItemComponent__getNewDrop(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *newDroplist; // x0
  Il2CppObject *Item; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleDropItem__o *v8; // x8
  BattleDropItem_o *v9; // x19

  if ( (byte_4B05712 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v4);
    byte_4B05712 = 1;
  }
  newDroplist = (System_Collections_Generic_List_object__o *)this->fields.newDroplist;
  if ( !newDroplist || newDroplist->fields._size < 1 )
    return 0LL;
  Item = System_Collections_Generic_List_object___get_Item(
           newDroplist,
           0,
           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
  v8 = this->fields.newDroplist;
  if ( !v8 )
    sub_1BC3264(Item, v7);
  v9 = (BattleDropItem_o *)Item;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)v8,
    0,
    (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_BattleDropItem__RemoveAt__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__itemDialogCallBack(
        BattleResultItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B0570A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, flg);
    sub_1BC3008(&Method_BattleResultItemComponent_endItemDialogCallBack__, v4);
    sub_1BC3008(&Method_BattleResultItemComponent_itemDialogCallBack__, v5);
    byte_4B0570A = 1;
  }
  v6 = Method_BattleResultItemComponent_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_BattleResultItemComponent_itemDialogCallBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BC3020(Method_BattleResultItemComponent_itemDialogCallBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  itemDialog = this->fields.itemDialog;
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultItemComponent_endItemDialogCallBack__, 0LL);
  if ( !itemDialog )
    sub_1BC3264(v10, v11);
  ItemDetailInfoComponent__Close_32341944(itemDialog, v9, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine(
        BattleResultItemComponent_o *this,
        UnityEngine_GameObject_o *itemIconEffectObj,
        BattleDropItemComponent_o *dropItem,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B05703 & 1) == 0 )
  {
    sub_1BC3008(&BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo, itemIconEffectObj);
    byte_4B05703 = 1;
  }
  v6 = sub_1BC3254(BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = itemIconEffectObj;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)itemIconEffectObj, v7, v8);
  *(_QWORD *)(v6 + 40) = dropItem;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 40), (int32_t)dropItem, v9, v10);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultItemComponent__setCondensedScale(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *getBoostLabel; // x0
  UILabel_o *getTitleLabel; // x20

  if ( (byte_4B05714 & 1) == 0 )
  {
    sub_1BC3008(&BattleResultItemComponent_TypeInfo, method);
    byte_4B05714 = 1;
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
          0LL),
        (getBoostLabel = this->fields.getBoostLabel) == 0LL) )
  {
    sub_1BC3264(getBoostLabel, method);
  }
  UILabel__SetCondensedScale(
    getBoostLabel,
    BattleResultItemComponent_TypeInfo->static_fields->GET_TITLE_LABEL_MAX_WIDTH,
    0,
    0LL);
}


void __fastcall BattleResultItemComponent__setResultData(
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x26
  System_Collections_Generic_List_object__o *v53; // x22
  void *object; // x0
  struct BattleDropItem_array *gifts; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Collections_Generic_List_object__o **v58; // x24
  System_Collections_Generic_List_object__o *v59; // x27
  System_Predicate_object__o *v60; // x22
  Il2CppObject *v61; // x28
  struct BattleResultItemComponent___c_StaticFields *static_fields; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  UserEventEntity_array *v68; // x2
  __int64 v69; // x22
  __int64 v70; // x8
  int v71; // w9
  System_Predicate_object__o **v72; // x25
  System_Predicate_object__o *v73; // x22
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  _DWORD *v76; // x22
  int max_length; // w8
  __int64 v78; // x9
  BattleDropItem_o *v79; // x12
  struct System_String_array *voiceIds; // x1
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_List_object__o *v83; // x23
  struct System_Collections_Generic_List_BattleDropItem__o *newDroplist; // x25
  BattleResultItemComponent___c_c *v85; // x0
  System_Predicate_object__o *_9__48_2; // x22
  Il2CppObject *v87; // x26
  struct BattleResultItemComponent___c_StaticFields *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  BattleViewItemlistComponent_o *itemWindow; // x22
  BattleDropItem_array *v92; // x23
  BattleDropItemComponent_ClickDelegate_o *v93; // x25
  const MethodInfo *v94; // x1
  const MethodInfo *v95; // x1
  const MethodInfo *v96; // x1
  UserGameEntity_o *SelfUserGame; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v98; // x28
  int32_t v99; // w26
  _BOOL8 v100; // x0
  __int64 v101; // x1
  BattleDropItem_o *current; // x22
  _BOOL8 isAutoSellItem; // x0
  __int64 v104; // x1
  Il2CppObject *v105; // x0
  __int64 v106; // x1
  int klass; // w8
  int64_t v108; // x4
  signed int v109; // w8
  signed int v110; // w20
  int32_t v111; // w29
  EventConquestInfo_o *v112; // x22
  int v113; // w8
  __int64 v114; // x8
  UserGameEntity_o *oldGamea; // [xsp+8h] [xbp-108h]
  int32_t eventGroupId; // [xsp+20h] [xbp-F0h]
  const MethodInfo *v117; // [xsp+28h] [xbp-E8h]
  UserGameEntity_o *v118; // [xsp+60h] [xbp-B0h]
  UserEventPointEntity_array *oldUsrPointa; // [xsp+68h] [xbp-A8h]
  int32_t eventIda; // [xsp+74h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v121; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v122; // [xsp+90h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF

  if ( (byte_4B056F9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Find_DropUpInfo___, drop);
    sub_1BC3008(&BattleDropItem_TypeInfo, v24);
    sub_1BC3008(&Method_BattleResultItemComponent_setShowConf__, v25);
    sub_1BC3008(&BattleDropItemComponent_ClickDelegate_TypeInfo, v26);
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, v27);
    sub_1BC3008(&Method_DataManager_GetMaster_EventDetailMaster___, v28);
    sub_1BC3008(&DataManager_TypeInfo, v29);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v30);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v31);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__, v32);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__, v33);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleDropItem__get_Current__, v34);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__AddRange__, v35);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__FindAll__, v36);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__, v37);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__Insert__, v38);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__ToArray__, v39);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v40);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v41);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v42);
    sub_1BC3008(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v43);
    sub_1BC3008(&System_Predicate_DropUpInfo__TypeInfo, v44);
    sub_1BC3008(&System_Predicate_BattleDropItem__TypeInfo, v45);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46);
    sub_1BC3008(&Method_BattleResultItemComponent___c__setResultData_b__48_0__, v47);
    sub_1BC3008(&Method_BattleResultItemComponent___c__setResultData_b__48_2__, v48);
    sub_1BC3008(&Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__, v49);
    sub_1BC3008(&BattleResultItemComponent___c__DisplayClass48_0_TypeInfo, v50);
    sub_1BC3008(&BattleResultItemComponent___c_TypeInfo, v51);
    byte_4B056F9 = 1;
  }
  entity = 0LL;
  memset(&v122, 0, sizeof(v122));
  v52 = sub_1BC3254(BattleResultItemComponent___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v52, 0LL);
  eventIda = eventId;
  this->fields.g_eventId = eventId;
  v53 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleDropItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
  if ( !v52 )
    goto LABEL_27;
  *(_QWORD *)(v52 + 16) = v53;
  v58 = (System_Collections_Generic_List_object__o **)(v52 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v52 + 16), (int32_t)v53, v56, v57);
  object = *(void **)(v52 + 16);
  if ( !object )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)object,
    (System_Collections_Generic_IEnumerable_T__o *)drop,
    (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
  object = BattleResultItemComponent___c_TypeInfo;
  v59 = *v58;
  if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
    object = BattleResultItemComponent___c_TypeInfo;
  }
  v60 = *(System_Predicate_object__o **)(*((_QWORD *)object + 23) + 8LL);
  if ( !v60 )
  {
    if ( !*((_DWORD *)object + 56) )
    {
      j_il2cpp_runtime_class_init_0(object);
      object = BattleResultItemComponent___c_TypeInfo;
    }
    v61 = (Il2CppObject *)**((_QWORD **)object + 23);
    v60 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_BattleDropItem__TypeInfo);
    System_Predicate_object____ctor(v60, v61, Method_BattleResultItemComponent___c__setResultData_b__48_0__, 0LL);
    static_fields = BattleResultItemComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Predicate_BattleDropItem__o *)v60;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__48_0, (int32_t)v60, v63, v64);
  }
  if ( !v59 )
    goto LABEL_27;
  All = System_Collections_Generic_List_object___FindAll(
          v59,
          (System_Predicate_T__o *)v60,
          (const MethodInfo_36A1550 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
  this->fields.newDroplist = (struct System_Collections_Generic_List_BattleDropItem__o *)All;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.newDroplist, (int32_t)All, v66, v67);
  if ( getqp >= 1 )
  {
    v69 = sub_1BC3254(BattleDropItem_TypeInfo);
    BattleDropItem___ctor((BattleDropItem_o *)v69, 0LL);
    if ( !v69 )
      goto LABEL_27;
    *(_QWORD *)(v69 + 20) = 0x500000002LL;
    BattleDropItem__setNum((BattleDropItem_o *)v69, getqp, originalGetQp, 0LL);
    object = *v58;
    if ( !*v58 )
      goto LABEL_27;
    System_Collections_Generic_List_object___Insert(
      (System_Collections_Generic_List_object__o *)object,
      0,
      (Il2CppObject *)v69,
      (const MethodInfo_36A1BF0 *)Method_System_Collections_Generic_List_BattleDropItem__Insert__);
  }
  v118 = oldGame;
  oldUsrPointa = oldUsrPoint;
  if ( dropupinfos )
  {
    v70 = *(_QWORD *)(v52 + 16);
    *(_DWORD *)(v52 + 24) = 0;
    if ( !v70 )
      goto LABEL_27;
    v71 = 0;
    v72 = (System_Predicate_object__o **)(v52 + 32);
    while ( v71 < *(_DWORD *)(v70 + 24) )
    {
      v73 = *v72;
      if ( !*v72 )
      {
        v73 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_DropUpInfo__TypeInfo);
        System_Predicate_object____ctor(
          v73,
          (Il2CppObject *)v52,
          Method_BattleResultItemComponent___c__DisplayClass48_0__setResultData_b__1__,
          0LL);
        *(_QWORD *)(v52 + 32) = v73;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v52 + 32), (int32_t)v73, v74, v75);
      }
      object = System_Array__Find_object_(
                 (System_Object_array *)dropupinfos,
                 (System_Predicate_T__o *)v73,
                 (const MethodInfo_30FE114 *)Method_System_Array_Find_DropUpInfo___);
      if ( object )
      {
        v76 = object;
        object = *v58;
        if ( !*v58 )
          goto LABEL_27;
        object = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)object,
                   *(_DWORD *)(v52 + 24),
                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !object )
          goto LABEL_27;
        *((_DWORD *)object + 18) = v76[5];
      }
      v70 = *(_QWORD *)(v52 + 16);
      v71 = *(_DWORD *)(v52 + 24) + 1;
      *(_DWORD *)(v52 + 24) = v71;
      if ( !v70 )
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
        v78 = 0LL;
        while ( (unsigned int)v78 < max_length )
        {
          v79 = gifts->m_Items[v78];
          if ( !v79 )
            goto LABEL_27;
          ++v78;
          v79->fields.isAddReward = 1;
          if ( (int)v78 >= max_length )
            goto LABEL_35;
        }
LABEL_94:
        sub_1BC326C(object, gifts, v68);
      }
LABEL_35:
      object = *v58;
      if ( !*v58 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)object,
        (System_Collections_Generic_IEnumerable_T__o *)gifts,
        (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      this->fields.animationSvtId = rewardBonus->fields.animationId;
      voiceIds = rewardBonus->fields.voiceIds;
      this->fields.voiceIds = voiceIds;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voiceIds, (int32_t)voiceIds, v81, v82);
      v83 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleDropItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v83,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
      if ( !v83 )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        v83,
        (System_Collections_Generic_IEnumerable_T__o *)rewardBonus->fields.gifts,
        (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
      newDroplist = this->fields.newDroplist;
      v85 = BattleResultItemComponent___c_TypeInfo;
      if ( !BattleResultItemComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultItemComponent___c_TypeInfo);
        v85 = BattleResultItemComponent___c_TypeInfo;
      }
      _9__48_2 = (System_Predicate_object__o *)v85->static_fields->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !v85->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v85);
          v85 = BattleResultItemComponent___c_TypeInfo;
        }
        v87 = (Il2CppObject *)v85->static_fields->__9;
        _9__48_2 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_BattleDropItem__TypeInfo);
        System_Predicate_object____ctor(
          _9__48_2,
          v87,
          Method_BattleResultItemComponent___c__setResultData_b__48_2__,
          0LL);
        v88 = BattleResultItemComponent___c_TypeInfo->static_fields;
        v88->__9__48_2 = (struct System_Predicate_BattleDropItem__o *)_9__48_2;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v88->__9__48_2, (int32_t)_9__48_2, v89, v90);
      }
      object = System_Collections_Generic_List_object___FindAll(
                 v83,
                 (System_Predicate_T__o *)_9__48_2,
                 (const MethodInfo_36A1550 *)Method_System_Collections_Generic_List_BattleDropItem__FindAll__);
      if ( !newDroplist )
LABEL_27:
        sub_1BC3264(object, gifts);
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)newDroplist,
        (System_Collections_Generic_IEnumerable_T__o *)object,
        (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_BattleDropItem__AddRange__);
    }
  }
  object = *v58;
  if ( !*v58 )
    goto LABEL_27;
  itemWindow = this->fields.itemWindow;
  v92 = (BattleDropItem_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)object,
                                  (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleDropItem__ToArray__);
  v93 = (BattleDropItemComponent_ClickDelegate_o *)sub_1BC3254(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v93,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_setShowConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_27;
  BattleViewItemlistComponent__setListDataCustomColumn_46402056(
    itemWindow,
    v92,
    eventIda,
    v93,
    this->fields.itemColumnCount,
    0LL);
  object = this->fields.itemWindow;
  if ( !object )
    goto LABEL_27;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)object, 0LL);
  if ( rewardBonus )
  {
    BattleResultItemComponent__AddItemNewLine(this, v94);
    BattleResultItemComponent__SetAddItemSvtAnimation(this, v95);
    BattleResultItemComponent__SetAddItemIconEffect(this, v96);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !object )
    goto LABEL_27;
  object = DataManager__GetMasterData_object_(
             (DataManager_o *)object,
             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*v58 )
    goto LABEL_27;
  v98 = (DataMasterBase_TMaster__TEntity__PKType__o *)object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v121,
    *v58,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_BattleDropItem__GetEnumerator__);
  v99 = 0;
  v122 = v121;
  while ( 1 )
  {
    v100 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v122,
             (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__MoveNext__);
    if ( !v100 )
      break;
    current = (BattleDropItem_o *)v122.fields._current;
    if ( !v122.fields._current )
      sub_1BC3264(v100, v101);
    isAutoSellItem = BattleDropItem__isAutoSellItem((BattleDropItem_o *)v122.fields._current, 0LL);
    if ( current->fields.type == 2 )
    {
      if ( !v98 )
        sub_1BC3264(isAutoSellItem, v104);
      v105 = DataMasterBase_object__object__int___GetEntity(
               v98,
               current->fields.objectId,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v105 )
        sub_1BC3264(0LL, v106);
      klass = (int)v105[3].klass;
      if ( klass == 1 || klass == 16 )
        v99 += BattleDropItem__getTotalNum(current, 0LL);
    }
    v99 += current->fields.num * current->fields.sellQp;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v122,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_BattleDropItem__Dispose__);
  if ( !eventConquestInfos )
    goto LABEL_27;
  v109 = eventConquestInfos->max_length;
  if ( v109 < 1 )
  {
    v111 = 0;
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  else
  {
    v110 = 0;
    v111 = 0;
    do
    {
      if ( v110 >= (unsigned int)v109 )
        goto LABEL_94;
      v112 = eventConquestInfos->m_Items[v110];
      if ( !v112 )
        goto LABEL_27;
      if ( v112->fields.type == 2 )
      {
        if ( !v98 )
          goto LABEL_27;
        object = DataMasterBase_object__object__int___GetEntity(
                   v98,
                   v112->fields.objectId,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( object )
        {
          v113 = *((_DWORD *)object + 12);
          if ( v113 == 16 || v113 == 1 )
            v111 += v112->fields.getNum;
        }
      }
      v109 = eventConquestInfos->max_length;
      ++v110;
    }
    while ( v110 < v109 );
    if ( !viewGroupIds )
      goto LABEL_27;
  }
  v114 = *(_QWORD *)&viewGroupIds->max_length;
  if ( (_DWORD)v114 == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( !object )
      goto LABEL_27;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)object,
           &entity,
           eventIda,
           (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      object = entity;
      if ( !entity )
        goto LABEL_27;
      object = (void *)EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)object & 1) != 0 )
      {
        if ( !viewGroupIds->max_length )
          goto LABEL_94;
        eventGroupId = viewGroupIds->m_Items[1];
        goto LABEL_93;
      }
    }
    v114 = *(_QWORD *)&viewGroupIds->max_length;
  }
  if ( v114 )
  {
    BattleResultItemComponent__SetGroupEventRoot(
      this,
      eventIda,
      v68,
      oldUsrPointa,
      v108,
      SelfUserGame,
      v99,
      viewGroupIds,
      v111,
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
    v99,
    boostRate,
    v111,
    firstClearRewardQp,
    v118,
    eventConquestInfos,
    isNotDisplayEventPoint,
    eventGroupId,
    v117);
}


void __fastcall BattleResultItemComponent__setShowCommandCodeConf(
        BattleResultItemComponent_o *this,
        int64_t commandCodeId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B0570C & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9551/*"OPEN_COMMANDCODE"*/, commandCodeId);
    byte_4B0570C = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandCodeId = commandCodeId;
  if ( !myFsm )
    sub_1BC3264(0LL, commandCodeId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9551/*"OPEN_COMMANDCODE"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  int32_t type; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( !item )
    sub_1BC3264(this, 0LL);
  type = item->fields.type;
  if ( Gift__IsServant(type, 0LL) )
  {
    BattleResultItemComponent__setShowServantConf(this, item, v6);
  }
  else if ( Gift__IsItem(type, 0LL) )
  {
    BattleResultItemComponent__setShowItemConf(this, item->fields.objectId, v7);
  }
  else if ( Gift__IsCommandCode(type, 0LL) )
  {
    BattleResultItemComponent__setShowCommandCodeConf(this, item->fields.userSvtId, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultItemComponent__setShowItemConf(
        BattleResultItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B05708 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9558/*"OPEN_ITEM"*/, *(_QWORD *)&itemId);
    byte_4B05708 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_itemId = itemId;
  if ( !myFsm )
    sub_1BC3264(0LL, *(_QWORD *)&itemId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9558/*"OPEN_ITEM"*/, 0LL);
}


void __fastcall BattleResultItemComponent__setShowServantConf(
        BattleResultItemComponent_o *this,
        BattleDropItem_o *dropItem,
        const MethodInfo *method)
{
  BattleResultItemComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4B05704 & 1) == 0 )
  {
    this = (BattleResultItemComponent_o *)sub_1BC3008(&StringLiteral_9566/*"OPEN_SERVANT"*/, dropItem);
    byte_4B05704 = 1;
  }
  v4->fields.tmp_userSvtId = 0LL;
  v4->fields.tmp_svtId = 0;
  if ( !dropItem
    || (!BattleDropItem__isAutoSellItem(dropItem, 0LL)
      ? (v4->fields.tmp_userSvtId = dropItem->fields.userSvtId)
      : (v4->fields.tmp_svtId = dropItem->fields.objectId),
        (this = (BattleResultItemComponent_o *)v4->fields.myFsm) == 0LL) )
  {
    sub_1BC3264(this, dropItem);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9566/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultItemComponent__showCommandCodeDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_4B0570D & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleResultItemComponent_commandCodeDialogCallBack__, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1BC3008(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B0570D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_commandCodeId,
                   (const MethodInfo_32B15CC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
        v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleResultItemComponent_commandCodeDialogCallBack__,
          0LL),
        !v11) )
  {
    sub_1BC3264(Instance, v9);
  }
  CommonUI__OpenServantStatusDialog_30743612((CommonUI_o *)v11, 0, (UserCommandCodeEntity_o *)Entity, v12, 0LL, 0LL);
}


void __fastcall BattleResultItemComponent__showItemDialog(BattleResultItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v11; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v12; // x22

  if ( (byte_4B05709 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleResultItemComponent_itemDialogCallBack__, method);
    sub_1BC3008(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B05709 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   this->fields.tmp_itemId,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v11 = (ItemEntity_o *)Entity,
        v12 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BC3254(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_BattleResultItemComponent_itemDialogCallBack__,
          0LL),
        !itemDialog) )
  {
    sub_1BC3264(Instance, v8);
  }
  ItemDetailInfoComponent__Open(itemDialog, v11, v12, 50, 0LL);
}


void __fastcall BattleResultItemComponent__showServantDialog(
        BattleResultItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t tmp_userSvtId; // x21
  Il2CppObject *Instance; // x20
  int64_t v7; // x21
  ServantStatusDialog_EndDelegate_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t tmp_svtId; // w21
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_4B05705 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleResultItemComponent_DialogCallBack__, method);
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B05705 = 1;
  }
  tmp_userSvtId = this->fields.tmp_userSvtId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( tmp_userSvtId >= 1 )
  {
    v7 = this->fields.tmp_userSvtId;
    v8 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultItemComponent_DialogCallBack__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_30740232((CommonUI_o *)Instance, 0, v7, v8, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_1BC3264(v9, v10);
  }
  tmp_svtId = this->fields.tmp_svtId;
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleResultItemComponent_DialogCallBack__,
    0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30744308((CommonUI_o *)Instance, 0, tmp_svtId, v12, 0LL);
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58___ctor(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__MoveNext(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *executingCallback; // x0
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v11; // x9
  __int128 v12; // q0
  struct System_Collections_Generic_List_Enumerator_GameObject__o *p__7__wrap1; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *current; // x0
  Il2CppObject *Component_object; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  _BYTE *monitor; // x8
  System_Collections_IEnumerator_o *v22; // x1
  UnityEngine_Coroutine_o *started; // x0
  __int64 v24; // x1
  UnityEngine_MonoBehaviour_c *klass; // x8
  __int64 v26; // x0
  __int64 v27; // x1
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v28; // x8
  BattleResultComponent_o *v29; // x0
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v31; // x19
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35[2]; // [xsp+8h] [xbp-78h] BYREF
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o **v36; // [xsp+48h] [xbp-38h]
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *v37; // [xsp+58h] [xbp-28h] BYREF

  v37 = this;
  v2 = this;
  if ( (byte_4B0571D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    this = (BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *)sub_1BC3008(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v6);
    byte_4B0571D = 1;
  }
  v36 = &v37;
  _1__state = v2->fields.__1__state;
  _4__this = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BC3264(this, method);
    m_CancellationTokenSource = _4__this[1].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      sub_1BC3264(this, method);
    executingCallback = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[1].fields._executingCallback;
    if ( !executingCallback )
      sub_1BC3264(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v35,
      executingCallback,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v11 = v37;
    v12 = *(_OWORD *)&v35[0].fields._list;
    p__7__wrap1 = &v37->fields.__7__wrap1;
    v35[1] = v35[0];
    v37->fields.__7__wrap1.fields._current = (struct UnityEngine_GameObject_o *)v35[0].fields._current;
    *(_OWORD *)&v11->fields.__7__wrap1.fields._list = v12;
    sub_1BC2FAC((CGThumbnailListItem_o *)p__7__wrap1, 0, v14, v15);
    v2 = v37;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v37->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1BC3264(0LL, v16);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         current,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleDropItemComponent___);
    if ( !Component_object )
      sub_1BC3264(0LL, v19);
    monitor = Component_object[7].monitor;
    if ( !monitor )
      sub_1BC3264(Component_object, v19);
    if ( monitor[77] )
    {
      if ( !_4__this )
        sub_1BC3264(Component_object, v19);
      v22 = BattleResultItemComponent__itemFlashAnimationCoroutine(
              (BattleResultItemComponent_o *)Component_object,
              (UnityEngine_GameObject_o *)Component_object[9].monitor,
              (BattleDropItemComponent_o *)Component_object,
              v20);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70019872(_4__this, v22, 0LL);
      klass = _4__this[1].klass;
      if ( !klass )
        sub_1BC3264(started, v24);
      if ( !LOBYTE(klass->_2.instance_size) )
      {
        v31 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v31, 0.01, 0LL);
        v32 = v37;
        v37->fields.__2__current = (Il2CppObject *)v31;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v32->fields.__2__current, (int32_t)v31, v33, v34);
        result = 1;
        v37->fields.__1__state = 1;
        return result;
      }
    }
    v2 = v37;
  }
  BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(v37, v16);
  v28 = v37;
  v37->fields.__7__wrap1.fields._list = 0LL;
  *(_QWORD *)&v28->fields.__7__wrap1.fields._index = 0LL;
  v28->fields.__7__wrap1.fields._current = 0LL;
  if ( !_4__this )
    sub_1BC3264(v26, v27);
  v29 = (BattleResultComponent_o *)_4__this[1].klass;
  if ( !v29 )
    sub_1BC3264(0LL, v27);
  BattleResultComponent__QpFix(v29, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(this, method);
}


void __fastcall BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58____m__Finally1(
        BattleResultItemComponent__PlayItemIconEffectCoroutine_d__58_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B0571E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    byte_4B0571E = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57___ctor(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57__MoveNext(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  BattleResultItemComponent_o *_4__this; // x20
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleResultComponent_o *parentComp; // x8
  UnityEngine_WaitForSeconds_o *v18; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool result; // w0
  System_Collections_IEnumerator_o *v23; // x0
  System_Random_o *v24; // x21
  struct System_String_array *voiceIds; // x8
  struct BattleResultItemComponent___c__DisplayClass57_0_o *_8__1; // x8
  il2cpp_array_size_t v27; // w22
  System_String_o *v28; // x0
  __int64 v29; // x2
  struct System_String_array *v30; // x8
  BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *v31; // x21
  System_String_o *v32; // x22
  SeManager_c *v33; // x0
  Il2CppObject *v34; // x24
  float DEFAULT_VOLUME; // s8
  System_Action_o *v36; // x23
  struct BattleResultItemComponent___c__DisplayClass57_0_o *v37; // x8
  struct BattleResultComponent_o *v38; // x8
  CGThumbnailListItem_o *v39; // x19

  v4 = this;
  if ( (byte_4B0571F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&System_Random_TypeInfo, v5);
    sub_1BC3008(&SeManager_TypeInfo, v6);
    sub_1BC3008(&SoundManager_TypeInfo, v7);
    sub_1BC3008(&Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__, v8);
    sub_1BC3008(&BattleResultItemComponent___c__DisplayClass57_0_TypeInfo, v9);
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v10);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)sub_1BC3008(&StringLiteral_12635/*"Servants_"*/, v11);
    byte_4B0571F = 1;
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
      v14 = (Il2CppObject *)sub_1BC3254(BattleResultItemComponent___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor(v14, 0LL);
      v4->fields.__8__1 = (struct BattleResultItemComponent___c__DisplayClass57_0_o *)v14;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v14, v15, v16);
      if ( !_4__this )
        goto LABEL_30;
      parentComp = _4__this->fields.parentComp;
      if ( !parentComp )
        goto LABEL_30;
      if ( !parentComp->fields.isAddRewardEffectSkip )
      {
        v18 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v18, 0.3, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v18;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(p__2__current, (int32_t)v18, v20, v21);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
    }
    v23 = BattleResultItemComponent__PlayItemIconEffectCoroutine(_4__this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)_4__this, v23, 0LL);
    v24 = (System_Random_o *)sub_1BC3254(System_Random_TypeInfo);
    System_Random___ctor(v24, 0LL);
    voiceIds = _4__this->fields.voiceIds;
    if ( !voiceIds )
      goto LABEL_30;
    if ( !v24 )
      goto LABEL_30;
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, _QWORD, Il2CppMethodPointer))v24->klass->vtable._6_Next.method)(
                                                                      v24,
                                                                      0LL,
                                                                      voiceIds->max_length,
                                                                      v24->klass->vtable._7_Next.methodPtr);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_30;
    v27 = (unsigned int)this;
    _8__1->fields.IsVoiceComp = 0;
    v28 = System_Int32__ToString((int)_4__this + 272, 0LL);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)System_String__Concat_62348648(
                                                                      (System_String_o *)StringLiteral_12635/*"Servants_"*/,
                                                                      v28,
                                                                      0LL);
    v30 = _4__this->fields.voiceIds;
    if ( !v30 )
      goto LABEL_30;
    if ( v27 >= v30->max_length )
      sub_1BC326C(this, method, v29);
    v31 = this;
    v32 = v30->m_Items[v27];
    v33 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v33 = SeManager_TypeInfo;
    }
    v34 = (Il2CppObject *)v4->fields.__8__1;
    DEFAULT_VOLUME = v33->static_fields->DEFAULT_VOLUME;
    v36 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      v34,
      Method_BattleResultItemComponent___c__DisplayClass57_0__PlayVoiceCoroutine_b__0__,
      0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this = (BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *)SoundManager__playVoice_40538664(
                                                                      (System_String_o *)v31,
                                                                      v32,
                                                                      DEFAULT_VOLUME,
                                                                      v36,
                                                                      0,
                                                                      0LL);
  }
  v37 = v4->fields.__8__1;
  if ( !v37 )
    goto LABEL_30;
  if ( v37->fields.IsVoiceComp )
  {
LABEL_27:
    ActionExtensions__Call(v4->fields.callback, 0LL);
    return 0;
  }
  if ( !_4__this || (v38 = _4__this->fields.parentComp) == 0LL )
LABEL_30:
    sub_1BC3264(this, method);
  if ( v38->fields.isAddRewardEffectSkip )
    goto LABEL_27;
  v4->fields.__2__current = 0LL;
  v39 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1BC2FAC(v39, 0, v2, v3);
  LODWORD(v39[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleResultItemComponent__PlayVoiceCoroutine_d__57_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__PlayVoiceCoroutine_d__57__System_IDisposable_Dispose(
        BattleResultItemComponent__PlayVoiceCoroutine_d__57_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleResultItemComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B0571B & 1) == 0 )
  {
    sub_1BC3008(&BattleResultItemComponent___c_TypeInfo, v1);
    byte_4B0571B = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BattleResultItemComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultItemComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultItemComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleResultItemComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleResultItemComponent___c___ctor(BattleResultItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_0(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BC3264(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_39466060(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_39466452(s->fields.type, 0LL);
}


bool __fastcall BattleResultItemComponent___c___setResultData_b__48_2(
        BattleResultItemComponent___c_o *this,
        BattleDropItem_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BC3264(this, 0LL);
  if ( !s->fields.isNew )
    return 0;
  if ( Gift__IsServant_39466060(s->fields.type, 0LL) )
    return 1;
  return Gift__IsCommandCode_39466452(s->fields.type, 0LL);
}


void __fastcall BattleResultItemComponent___c__DisplayClass48_0___ctor(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultItemComponent___c__DisplayClass48_0___setResultData_b__1(
        BattleResultItemComponent___c__DisplayClass48_0_o *this,
        DropUpInfo_o *e,
        const MethodInfo *method)
{
  BattleResultItemComponent___c__DisplayClass48_0_o *v4; // x20
  int32_t itemId; // w19

  v4 = this;
  if ( (byte_4B0571C & 1) == 0 )
  {
    this = (BattleResultItemComponent___c__DisplayClass48_0_o *)sub_1BC3008(
                                                                  &Method_System_Collections_Generic_List_BattleDropItem__get_Item__,
                                                                  e);
    byte_4B0571C = 1;
  }
  if ( !e
    || (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)v4->fields.list) == 0LL
    || (itemId = e->fields.itemId,
        (this = (BattleResultItemComponent___c__DisplayClass48_0_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v4->fields.i,
                                                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__)) == 0LL) )
  {
    sub_1BC3264(this, e);
  }
  return itemId == this->fields.i;
}


void __fastcall BattleResultItemComponent___c__DisplayClass51_0___ctor(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultItemComponent___c__DisplayClass51_0___SetEventInfo_b__0(
        BattleResultItemComponent___c__DisplayClass51_0_o *this,
        UserEventPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.groupId == this->fields.eventGroupId;
}


void __fastcall BattleResultItemComponent___c__DisplayClass57_0___ctor(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultItemComponent___c__DisplayClass57_0___PlayVoiceCoroutine_b__0(
        BattleResultItemComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  this->fields.IsVoiceComp = 1;
}


void __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59___ctor(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__MoveNext(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v2; // x19
  __int64 v3; // x1
  int32_t _1__state; // w8
  UnityEngine_Object_o *itemIconEffectObj; // x20
  BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *v6; // x20
  int v7; // s0
  UnityEngine_WaitForSeconds_o *v10; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0
  struct BattleDropItemComponent_o *dropItem; // x8

  v2 = this;
  if ( (byte_4B05720 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)sub_1BC3008(
                                                                               &UnityEngine_WaitForSeconds_TypeInfo,
                                                                               v3);
    byte_4B05720 = 1;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    itemIconEffectObj = (UnityEngine_Object_o *)v2->fields.itemIconEffectObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(itemIconEffectObj, 0LL, 0LL) )
      goto LABEL_14;
    this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)v2->fields.itemIconEffectObj;
      if ( this )
      {
        this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)this,
                                                                                   0LL);
        if ( v2->fields.dropItem )
        {
          v6 = this;
          this = (BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *)UnityEngine_Component__get_transform(
                                                                                     (UnityEngine_Component_o *)v2->fields.dropItem,
                                                                                     0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
            if ( v6 )
            {
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v6, *(UnityEngine_Vector3_o *)&v7, 0LL);
LABEL_14:
              v10 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v10, 0.2333, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v10;
              p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1BC2FAC(p__2__current, (int32_t)v10, v12, v13);
              result = 1;
              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
              return result;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BC3264(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_Reset(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_Collections_IEnumerator_get_Current(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultItemComponent__itemFlashAnimationCoroutine_d__59__System_IDisposable_Dispose(
        BattleResultItemComponent__itemFlashAnimationCoroutine_d__59_o *this,
        const MethodInfo *method)
{
  ;
}