void DialogMessageMaster___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct DialogMessageMaster_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5970687 & 1) == 0 )
  {
    sub_2213A60(&DialogMessageMaster_TypeInfo);
    sub_2213A60(&StringLiteral_19452/*"dialogMessage_{0}_{1}"*/);
    sub_2213A60(&StringLiteral_24227/*"remindDialogMessage_{0}_{1}"*/);
    byte_5970687 = 1;
  }
  v7 = StringLiteral_19452/*"dialogMessage_{0}_{1}"*/;
  DialogMessageMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_19452/*"dialogMessage_{0}_{1}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DialogMessageMaster_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_24227/*"remindDialogMessage_{0}_{1}"*/;
  static_fields = DialogMessageMaster_TypeInfo->static_fields;
  static_fields->SAVE_REMIND_KEY = (struct System_String_o *)StringLiteral_24227/*"remindDialogMessage_{0}_{1}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_REMIND_KEY, v8, v10, v11, v12, v13, v14, v15);
}


void DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970681 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
    byte_5970681 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    236,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
}


void DialogMessageMaster__DeleteContinueData(DialogMessageMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *v6; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *v13; // x19
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  _DWORD *v19; // x19
  DialogMessageMaster_c *v20; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  struct DialogMessageMaster_StaticFields *static_fields; // x8
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  System_Collections_Generic_IEnumerator_T__o *v30; // x20
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  int v35; // [xsp+8h] [xbp-68h] BYREF
  int v36; // [xsp+Ch] [xbp-64h] BYREF
  int v37; // [xsp+10h] [xbp-60h] BYREF
  int v38; // [xsp+14h] [xbp-5Ch] BYREF
  __int64 v39; // [xsp+18h] [xbp-58h]
  System_Collections_Generic_IEnumerator_T__o **v40; // [xsp+20h] [xbp-50h]
  System_Collections_Generic_IEnumerator_T__o *v41; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_5970682 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_2213A60(&DialogMessageMaster_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970682 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v41 = 0;
  if ( !list )
    sub_2213CDC(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  v41 = Enumerator;
  v39 = 0;
  v40 = &v41;
  if ( !Enumerator )
LABEL_24:
    sub_2213CDC(Enumerator, v5);
  v6 = Enumerator;
  while ( 1 )
  {
    klass = v6->klass;
    v8 = *(unsigned __int16 *)&v6->klass->_2.rank;
    if ( *(_WORD *)&v6->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_224BC3C(v6, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            v6,
            *(_QWORD *)(v10 + 8));
    if ( (v11 & 1) == 0 )
      break;
    v13 = v41;
    if ( !v41 )
      sub_2213CDC(v11, v12);
    v14 = v41->klass;
    v15 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DialogMessageEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_18:
      v17 = sub_224BC3C(v41, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      v13,
                      *(_QWORD *)(v17 + 8));
    v20 = DialogMessageMaster_TypeInfo;
    if ( !*(&DialogMessageMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v18);
      v20 = DialogMessageMaster_TypeInfo;
    }
    if ( !v19 )
      sub_2213CDC(v20, v18);
    SAVE_KEY = v20->static_fields->SAVE_KEY;
    v38 = v19[4];
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v38);
    v37 = v19[17];
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37);
    v24 = System_String__Format_75697880(SAVE_KEY, v22, v23, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v24, 0);
    static_fields = DialogMessageMaster_TypeInfo->static_fields;
    v36 = v19[4];
    SAVE_REMIND_KEY = static_fields->SAVE_REMIND_KEY;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v36);
    v35 = v19[19];
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v35);
    v29 = System_String__Format_75697880(SAVE_REMIND_KEY, v27, v28, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v29, 0);
    v6 = v41;
    if ( !v41 )
      goto LABEL_24;
  }
  v30 = v41;
  if ( v41 )
  {
    v31 = v41->klass;
    v32 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_30;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_30:
      v34 = sub_224BC3C(v41, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
  }
}


DialogMessageEntity_array *DialogMessageMaster__GetDialogList(
        DialogMessageMaster_o *this,
        int32_t openType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  int64_t Time; // x22
  DialogMessageEntity_o *v8; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  void *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  DialogMessageEntity_o *v24; // x0
  const MethodInfo *v25; // x2
  DialogMessageEntity_o *v26; // x23
  const MethodInfo *v27; // x2
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w4
  const MethodInfo *v32; // x5
  _BOOL8 IsOpenCondition; // x0
  __int64 v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  struct DialogMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v51; // x21
  struct DialogMessageMaster___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_Generic_IEnumerator_T__o *v60; // [xsp+18h] [xbp-48h]

  if ( (byte_5970683 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_DialogMessageEntity__TypeInfo);
    sub_2213A60(&DialogMessageEntity_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_DialogMessageMaster___c__GetDialogList_b__6_0__);
    sub_2213A60(&DialogMessageMaster___c_TypeInfo);
    byte_5970683 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  v8 = (DialogMessageEntity_o *)sub_2213CCC(DialogMessageEntity_TypeInfo);
  DialogMessageEntity___ctor(v8, v9);
  list = this->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  v60 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v13);
  for ( i = Enumerator; ; i = v60 )
  {
    klass = i->klass;
    v16 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_12;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v18 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            i,
            *(_QWORD *)(v18 + 8));
    if ( (v19 & 1) == 0 )
      break;
    if ( !v60 )
      sub_2213CDC(v19, v10);
    v20 = v60->klass;
    v21 = *(unsigned __int16 *)&v60->klass->_2.rank;
    if ( *(_WORD *)&v60->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DialogMessageEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_20;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_20:
      v23 = sub_224BC3C(v60, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
    }
    v24 = (DialogMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                     v60,
                                     *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( v24 )
    {
      if ( v24->fields.dialogOpenType == openType
        && DialogMessageEntity__IsOpenTime(v24, Time, v25)
        && !DialogMessageMaster__IsSavedAsSeen(this, v26, v27) )
      {
        IsOpenCondition = DialogMessageEntity__IsOpenCondition(v26, v28, v29, v30, v31, v32);
        if ( IsOpenCondition )
        {
          if ( !v5
            || (items = v5->fields._items,
                v42 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__,
                ++v5->fields._version,
                !items) )
          {
            sub_2213CDC(IsOpenCondition, v34);
          }
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v26,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v26;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v26, v35, v36, v37, v38, v39, v40);
          }
        }
      }
    }
  }
  if ( v60 )
  {
    v45 = v60->klass;
    v46 = *(unsigned __int16 *)&v60->klass->_2.rank;
    if ( *(_WORD *)&v60->klass->_2.rank )
    {
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_39;
      }
      v48 = (__int64)&v45->vtable[*v47];
    }
    else
    {
LABEL_39:
      v48 = sub_224BC3C(v60, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(v60, *(_QWORD *)(v48 + 8));
  }
  list = DialogMessageMaster___c_TypeInfo;
  if ( !*(&DialogMessageMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo, v10);
    list = DialogMessageMaster___c_TypeInfo;
  }
  static_fields = (struct DialogMessageMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__6_0 = (System_Comparison_T__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v10);
      static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v51, Method_DialogMessageMaster___c__GetDialogList_b__6_0__, 0);
    v52 = DialogMessageMaster___c_TypeInfo->static_fields;
    v52->__9__6_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__6_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->__9__6_0, (int32_t)_9__6_0, v53, v54, v55, v56, v57, v58);
  }
  if ( !v5 )
LABEL_52:
    sub_2213CDC(list, v10);
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__6_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  return (DialogMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
}


bool DialogMessageMaster__IsSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageMaster_o *v4; // x20
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v6; // x0
  System_String_o *v7; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  DialogMessageMaster_c *v12; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t Int; // w0
  __int64 v18; // x1
  int v19; // w8
  DialogMessageEntity_o *v20; // x0
  const MethodInfo *v21; // x4
  __int64 v22; // x1
  DialogMessageMaster_c *v23; // x0
  System_String_o *v24; // x20
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  DialogMessageEntity_o *Time; // x0
  const MethodInfo *v30; // x4
  __int64 v31; // x1
  DialogMessageMaster_c *v32; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x1
  DialogMessageMaster_c *v38; // x0
  System_String_o *v39; // x20
  Il2CppObject *v40; // x21
  __int64 v41; // x0
  int32_t *p_openedAt; // x1
  DialogMessageMaster_c *v43; // x0
  System_String_o *v44; // x20
  Il2CppObject *v45; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  struct DialogMessageMaster_StaticFields *static_fields; // x8
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  int32_t remindAt; // [xsp+0h] [xbp-40h] BYREF
  int32_t v53; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t openedAt; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_5970686 & 1) == 0 )
  {
    sub_2213A60(&DialogMessageMaster_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    this = (DialogMessageMaster_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970686 = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 7 )
  {
    v12 = DialogMessageMaster_TypeInfo;
    if ( !*(&DialogMessageMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, entity);
      v12 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v12->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
    openedAt = entity->fields.openedAt;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &openedAt);
    v16 = System_String__Format_75697880(SAVE_KEY, v14, v15, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v16, 0, 0);
    v19 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
    if ( Int < 1 )
    {
      if ( !v19 )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Time = (DialogMessageEntity_o *)NetworkManager__getTime(0);
      if ( !DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
              Time,
              entity->fields.remindAt,
              entity->fields.closedAt,
              (int64_t)Time,
              v30) )
        goto LABEL_36;
      v32 = DialogMessageMaster_TypeInfo;
      if ( !*(&DialogMessageMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v31);
        v32 = DialogMessageMaster_TypeInfo;
      }
      SAVE_REMIND_KEY = v32->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
      openedAt = entity->fields.remindAt;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &openedAt);
      v36 = System_String__Format_75697880(SAVE_REMIND_KEY, v34, v35, 0);
      if ( UnityEngine_PlayerPrefs__GetInt(v36, 0, 0) > 0 )
        goto LABEL_36;
      v38 = DialogMessageMaster_TypeInfo;
      if ( !*(&DialogMessageMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v37);
        v38 = DialogMessageMaster_TypeInfo;
      }
      v39 = v38->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
      v41 = qword_5984348;
      p_openedAt = &openedAt;
      openedAt = entity->fields.remindAt;
    }
    else
    {
      if ( !v19 )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      v20 = (DialogMessageEntity_o *)NetworkManager__getTime(0);
      if ( !DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
              v20,
              entity->fields.remindAt,
              entity->fields.closedAt,
              (int64_t)v20,
              v21) )
        goto LABEL_22;
      v23 = DialogMessageMaster_TypeInfo;
      if ( !*(&DialogMessageMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v22);
        v23 = DialogMessageMaster_TypeInfo;
      }
      v24 = v23->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
      openedAt = entity->fields.remindAt;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &openedAt);
      v27 = System_String__Format_75697880(v24, v25, v26, 0);
      if ( UnityEngine_PlayerPrefs__GetInt(v27, 0, 0) > 0 )
      {
LABEL_22:
        LOBYTE(seenList) = 1;
        return (char)seenList;
      }
      v43 = DialogMessageMaster_TypeInfo;
      if ( !*(&DialogMessageMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v28);
        v43 = DialogMessageMaster_TypeInfo;
      }
      v44 = v43->static_fields->SAVE_KEY;
      id = entity->fields.id;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
      openedAt = entity->fields.openedAt;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &openedAt);
      v47 = System_String__Format_75697880(v44, v45, v46, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v47, 0);
      static_fields = DialogMessageMaster_TypeInfo->static_fields;
      v53 = entity->fields.id;
      v39 = static_fields->SAVE_REMIND_KEY;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v53);
      v41 = qword_5984348;
      p_openedAt = &remindAt;
      remindAt = entity->fields.remindAt;
    }
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(v41, p_openedAt);
    v50 = System_String__Format_75697880(v39, v40, v49, 0);
    UnityEngine_PlayerPrefs__SetInt(v50, 1, 0);
LABEL_36:
    LOBYTE(seenList) = 0;
    return (char)seenList;
  }
  if ( frequencyType != 3 )
  {
    if ( frequencyType != 1 )
      goto LABEL_36;
    v6 = DialogMessageMaster_TypeInfo;
    if ( !*(&DialogMessageMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, entity);
      v6 = DialogMessageMaster_TypeInfo;
    }
    v7 = v6->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
    openedAt = entity->fields.openedAt;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &openedAt);
    v10 = System_String__Format_75697880(v7, v8, v9, 0);
    if ( UnityEngine_PlayerPrefs__GetInt(v10, 0, 0) < 1 )
      goto LABEL_36;
    goto LABEL_22;
  }
  seenList = v4->fields.seenList;
  if ( seenList )
    LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                         seenList,
                         entity->fields.id,
                         (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
  return (char)seenList;
}


void DialogMessageMaster__SaveAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageEntity_o *v3; // x19
  DialogMessageMaster_o *v4; // x20
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v6; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  MissionNaviTransitionBoardItem_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v3 = entity;
  v4 = this;
  if ( (byte_5970685 & 1) == 0 )
  {
    sub_2213A60(&DialogMessageMaster_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    this = (DialogMessageMaster_o *)sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970685 = 1;
  }
  if ( !v3 )
    goto LABEL_17;
  frequencyType = v3->fields.frequencyType;
  if ( frequencyType != 7 )
  {
    if ( frequencyType != 3 )
    {
      if ( frequencyType != 1 )
        return;
      goto LABEL_7;
    }
    seenList = (DialogMessageMaster_o *)v4->fields.seenList;
    p_seenList = (MissionNaviTransitionBoardItem_o *)&v4->fields.seenList;
    this = seenList;
    if ( seenList
      || (v13 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v13,
            (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (MissionNaviTransitionBoardItem_c *)v13,
          sub_2213A04(p_seenList, (int32_t)v13, v14, v15, v16, v17, v18, v19),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0) )
    {
      v20 = *(_QWORD *)&this->fields._MasterKind_k__BackingField;
      entity = (DialogMessageEntity_o *)(unsigned int)v3->fields.id;
      v21 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields._MasterName_k__BackingField);
      if ( v20 )
      {
        MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            (int32_t)entity,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_DWORD *)(v20 + 4 * MasterName_k__BackingField_low + 32) = (_DWORD)entity;
        }
        return;
      }
    }
LABEL_17:
    sub_2213CDC(this, entity);
  }
LABEL_7:
  v6 = DialogMessageMaster_TypeInfo;
  if ( !*(&DialogMessageMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, entity);
    v6 = DialogMessageMaster_TypeInfo;
  }
  SAVE_KEY = v6->static_fields->SAVE_KEY;
  id = v3->fields.id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
  openedAt = v3->fields.openedAt;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &openedAt);
  v10 = System_String__Format_75697880(SAVE_KEY, v8, v9, 0);
  UnityEngine_PlayerPrefs__SetInt(v10, 1, 0);
}


void DialogMessageMaster__ShowAvailables(
        DialogMessageMaster_o *this,
        int32_t opType,
        System_Action_o *callback,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t ex4,
        const MethodInfo *method)
{
  DialogMessageEntity_array *DialogList; // x1
  const MethodInfo *v11; // x4

  DialogList = DialogMessageMaster__GetDialogList(this, opType, (const MethodInfo *)callback);
  DialogMessageMaster__ShowChain(this, DialogList, 0, callback, v11);
}


void DialogMessageMaster__ShowChain(
        DialogMessageMaster_o *this,
        DialogMessageEntity_array *entitys,
        int32_t idx,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x8
  __int64 v32; // x9
  int v33; // w10
  DialogMessageEntity_o *v34; // x20
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x2

  if ( (byte_5970684 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__);
    sub_2213A60(&DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
    byte_5970684 = 1;
  }
  v9 = sub_2213CCC(DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = entitys;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)entitys, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = callBack;
  v24 = v9 + 40;
  *(_DWORD *)(v9 + 32) = idx;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)callBack, v25, v26, v27, v28, v29, v30);
  v31 = *(_QWORD *)(v9 + 24);
  if ( !v31 )
    goto LABEL_11;
  v32 = *(int *)(v9 + 32);
  v33 = *(_DWORD *)(v31 + 24);
  if ( (int)v32 < v33 )
  {
    if ( (unsigned int)v32 >= v33 )
      sub_2213CE4(v10);
    v34 = *(DialogMessageEntity_o **)(v31 + 8 * v32 + 32);
    v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)v9, Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__, 0);
    if ( v34 )
    {
      DialogMessageEntity__Open(v34, v35, v36);
      return;
    }
LABEL_11:
    sub_2213CDC(v10, v11);
  }
  if ( !*(_QWORD *)v24 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v24 + 64LL),
    *(_QWORD *)(*(_QWORD *)v24 + 40LL));
}


void DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970688 & 1) == 0 )
  {
    sub_2213A60(&DialogMessageMaster___c_TypeInfo);
    byte_5970688 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DialogMessageMaster___c_TypeInfo->static_fields->__9 = (struct DialogMessageMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DialogMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DialogMessageMaster___c___ctor(DialogMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t DialogMessageMaster___c___GetDialogList_b__6_0(
        DialogMessageMaster___c_o *this,
        DialogMessageEntity_o *a,
        DialogMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


void DialogMessageMaster___c__DisplayClass8_0___ctor(
        DialogMessageMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DialogMessageMaster___c__DisplayClass8_0___ShowChain_b__0(
        DialogMessageMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct DialogMessageEntity_array *entitys; // x8
  __int64 idx; // x9
  DialogMessageMaster___c__DisplayClass8_0_o *v5; // x19
  const MethodInfo *v6; // x4

  entitys = this->fields.entitys;
  if ( !entitys )
    goto LABEL_6;
  idx = this->fields.idx;
  v5 = this;
  if ( (unsigned int)idx >= LODWORD(entitys->max_length) )
    sub_2213CE4(this);
  this = (DialogMessageMaster___c__DisplayClass8_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__SaveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], v2),
        (this = (DialogMessageMaster___c__DisplayClass8_0_o *)v5->fields.__4__this) == 0) )
  {
LABEL_6:
    sub_2213CDC(this, method);
  }
  DialogMessageMaster__ShowChain(
    (DialogMessageMaster_o *)this,
    v5->fields.entitys,
    v5->fields.idx + 1,
    v5->fields.callBack,
    v6);
}