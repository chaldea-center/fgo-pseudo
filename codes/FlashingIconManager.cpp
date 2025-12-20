void FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B98D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
    sub_1C94098(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
    byte_4D2B98D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this->fields.flashIconList = (struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.flashIconList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABAA5C *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
}


void FlashingIconManager__AddIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        bool isFast,
        float extraCycleTime,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x20
  __int64 v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct FlashingIconManager_FlashIconContents_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  GrandQuestFolderBoardItem_o *v30; // x0
  int32_t v31; // w1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v32; // x21
  __int64 v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct FlashingIconManager_FlashIconContents_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x8
  System_Collections_Generic_List_object__o *v45; // x0
  Il2CppObject *v46; // x1

  if ( (byte_4D2B98A & 1) == 0 )
  {
    sub_1C94098(&FlashingIconManager_FlashIconContents_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B98A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0, 0) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v9);
    if ( isFast )
    {
      flashIconList = this->fields.flashIconList;
      v11 = sub_1C942E4(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      *(_QWORD *)(v11 + 24) = icon;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)icon, v12, v13, v14, v15, v16, v17);
      *(_DWORD *)(v11 + 16) = 1056964608;
      if ( flashIconList )
      {
        items = flashIconList->fields._items;
        v27 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
        ++flashIconList->fields._version;
        if ( items )
        {
          size = flashIconList->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
          {
            v29 = &items->obj.klass + size;
            flashIconList->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v11;
            v30 = (GrandQuestFolderBoardItem_o *)(v29 + 4);
            v31 = v11;
LABEL_18:
            sub_1C9403C(v30, v31, v20, v21, v22, v23, v24, v25);
            return;
          }
          v44 = v27[4];
          v45 = (System_Collections_Generic_List_object__o *)flashIconList;
          v46 = (Il2CppObject *)v11;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v45,
            v46,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v44 + 192) + 112LL));
          return;
        }
      }
    }
    else
    {
      v32 = this->fields.flashIconList;
      v33 = sub_1C942E4(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v33, 0);
      *(_QWORD *)(v33 + 24) = icon;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v33 + 24), (int32_t)icon, v34, v35, v36, v37, v38, v39);
      if ( extraCycleTime <= 0.0 )
      {
        *(_DWORD *)(v33 + 16) = 1065353216;
        if ( !v32 )
          goto LABEL_22;
      }
      else
      {
        *(float *)(v33 + 16) = extraCycleTime;
        if ( !v32 )
          goto LABEL_22;
      }
      v40 = v32->fields._items;
      v41 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
      ++v32->fields._version;
      if ( v40 )
      {
        v42 = v32->fields._size;
        if ( (unsigned int)v42 < LODWORD(v40->max_length) )
        {
          v43 = &v40->obj.klass + v42;
          v32->fields._size = v42 + 1;
          v43[4] = (Il2CppClass *)v33;
          v30 = (GrandQuestFolderBoardItem_o *)(v43 + 4);
          v31 = v33;
          goto LABEL_18;
        }
        v44 = v41[4];
        v45 = (System_Collections_Generic_List_object__o *)v32;
        v46 = (Il2CppObject *)v33;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1C942F0(v18, v19);
  }
}


float FlashingIconManager__CalcAlpha(FlashingIconManager_o *this, float targetCycleTime, const MethodInfo *method)
{
  float v3; // s9
  float v5; // s0

  v3 = targetCycleTime + targetCycleTime;
  v5 = fmodf(this->fields.dispTime, targetCycleTime + targetCycleTime);
  if ( v5 > targetCycleTime )
    v5 = v3 - v5;
  return v5 / targetCycleTime;
}


void FlashingIconManager__Reboot(FlashingIconManager_o *this, const MethodInfo *method)
{
  FlashingIconManager_o *v2; // x19
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4D2B989 & 1) == 0 )
  {
    this = (FlashingIconManager_o *)sub_1C94098(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
    byte_4D2B989 = 1;
  }
  flashIconList = v2->fields.flashIconList;
  v2->fields.dispTime = 0.0;
  if ( !flashIconList )
    sub_1C942F0(this, method);
  size = flashIconList->fields._size;
  v5 = flashIconList->fields._version + 1;
  flashIconList->fields._size = 0;
  flashIconList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)flashIconList->fields._items, 0, size, 0);
}


void FlashingIconManager__RemoveIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *flashIconList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  __int64 v10; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2B98B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B98B = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0, 0) )
  {
    flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
    if ( !flashIconList )
      sub_1C942F0(0, v5);
    if ( flashIconList->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        flashIconList,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v12,
               (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v7 )
          break;
        current = v12.fields._current;
        if ( !v12.fields._current )
          sub_1C942F0(v7, v8);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, const MethodInfo *))v12.fields._current->klass->vtable[0].methodPtr)(
                v12.fields._current,
                icon,
                v12.fields._current->klass->vtable[0].method)
            & 1) != 0 )
        {
          v11 = this->fields.flashIconList;
          if ( !v11 )
            sub_1C942F0(0, v10);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v11,
            current,
            (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  float dispTime; // s8
  __int64 v5; // x1
  float deltaTime; // s0
  void *Item; // x0
  int32_t v8; // w20
  float v9; // s9
  _QWORD *v10; // x21
  float v11; // s0

  if ( (byte_4D2B98C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
    byte_4D2B98C = 1;
  }
  flashIconList = this->fields.flashIconList;
  if ( flashIconList && flashIconList->fields._size )
  {
    dispTime = this->fields.dispTime;
    deltaTime = RealTime__get_deltaTime(0);
    Item = this->fields.flashIconList;
    this->fields.dispTime = dispTime + deltaTime;
    if ( !Item )
      goto LABEL_16;
    v8 = *((_DWORD *)Item + 6) - 1;
    if ( v8 >= 0 )
    {
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v8,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
        if ( !Item )
          break;
        v9 = *((float *)Item + 4);
        v10 = Item;
        v11 = fmodf(this->fields.dispTime, v9 + v9);
        Item = (void *)v10[3];
        if ( !Item )
          break;
        if ( v11 > v9 )
          v11 = (float)(v9 + v9) - v11;
        if ( !FlashingIconComponent__UpdateIcon((FlashingIconComponent_o *)Item, v11 / v9, 0) )
        {
          Item = this->fields.flashIconList;
          if ( !Item )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v8,
            (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v8 < 0 )
          return;
        Item = this->fields.flashIconList;
      }
      while ( Item );
LABEL_16:
      sub_1C942F0(Item, v5);
    }
  }
}


void FlashingIconManager_FlashIconContents___ctor(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *icon,
        float cycleTime,
        const MethodInfo *method)
{
  FlashingIconManager_FlashIconContents_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._icon_k__BackingField = icon;
  v6 = (FlashingIconManager_FlashIconContents_o *)((char *)v6 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v6, (int32_t)icon, v7, v8, v9, v10, v11, v12);
  *(float *)&v6[-1].fields._icon_k__BackingField = cycleTime;
}


float FlashingIconManager_FlashIconContents__get_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._cycleTime_k__BackingField;
}


FlashingIconComponent_o *FlashingIconManager_FlashIconContents__get_icon(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._icon_k__BackingField;
}


void FlashingIconManager_FlashIconContents__set_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._cycleTime_k__BackingField = value;
}


void FlashingIconManager_FlashIconContents__set_icon(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._icon_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._icon_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}