void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B011AD & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__, v4);
    byte_4B011AD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this->fields.flashIconList = (struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *)v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.flashIconList, (int32_t)v5, v6, v7);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
}


void __fastcall FlashingIconManager__AddIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        bool isFast,
        float extraCycleTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x20
  __int64 v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct FlashingIconManager_FlashIconContents_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  CGThumbnailListItem_o *v24; // x0
  int32_t v25; // w1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v26; // x21
  __int64 v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct FlashingIconManager_FlashIconContents_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  __int64 v34; // x8
  System_Collections_Generic_List_object__o *v35; // x0
  Il2CppObject *v36; // x1

  if ( (byte_4B011AA & 1) == 0 )
  {
    sub_1BC3008(&FlashingIconManager_FlashIconContents_TypeInfo, icon);
    sub_1BC3008(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4B011AA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v11);
    if ( isFast )
    {
      flashIconList = this->fields.flashIconList;
      v13 = sub_1BC3254(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v13, 0LL);
      *(_QWORD *)(v13 + 24) = icon;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)icon, v14, v15);
      *(_DWORD *)(v13 + 16) = 1056964608;
      if ( flashIconList )
      {
        items = flashIconList->fields._items;
        v21 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
        ++flashIconList->fields._version;
        if ( items )
        {
          size = flashIconList->fields._size;
          if ( (unsigned int)size < items->max_length )
          {
            v23 = &items->obj.klass + size;
            flashIconList->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v13;
            v24 = (CGThumbnailListItem_o *)(v23 + 4);
            v25 = v13;
LABEL_18:
            sub_1BC2FAC(v24, v25, v18, v19);
            return;
          }
          v34 = v21[4];
          v35 = (System_Collections_Generic_List_object__o *)flashIconList;
          v36 = (Il2CppObject *)v13;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            v36,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v34 + 192) + 112LL));
          return;
        }
      }
    }
    else
    {
      v26 = this->fields.flashIconList;
      v27 = sub_1BC3254(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v27, 0LL);
      *(_QWORD *)(v27 + 24) = icon;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 24), (int32_t)icon, v28, v29);
      if ( extraCycleTime <= 0.0 )
      {
        *(_DWORD *)(v27 + 16) = 1065353216;
        if ( !v26 )
          goto LABEL_22;
      }
      else
      {
        *(float *)(v27 + 16) = extraCycleTime;
        if ( !v26 )
          goto LABEL_22;
      }
      v30 = v26->fields._items;
      v31 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
      ++v26->fields._version;
      if ( v30 )
      {
        v32 = v26->fields._size;
        if ( (unsigned int)v32 < v30->max_length )
        {
          v33 = &v30->obj.klass + v32;
          v26->fields._size = v32 + 1;
          v33[4] = (Il2CppClass *)v27;
          v24 = (CGThumbnailListItem_o *)(v33 + 4);
          v25 = v27;
          goto LABEL_18;
        }
        v34 = v31[4];
        v35 = (System_Collections_Generic_List_object__o *)v26;
        v36 = (Il2CppObject *)v27;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1BC3264(v16, v17);
  }
}


float __fastcall FlashingIconManager__CalcAlpha(
        FlashingIconManager_o *this,
        float targetCycleTime,
        const MethodInfo *method)
{
  float v3; // s9
  float v5; // s0

  v3 = targetCycleTime + targetCycleTime;
  v5 = fmodf(this->fields.dispTime, targetCycleTime + targetCycleTime);
  if ( v5 > targetCycleTime )
    v5 = v3 - v5;
  return v5 / targetCycleTime;
}


void __fastcall FlashingIconManager__Reboot(FlashingIconManager_o *this, const MethodInfo *method)
{
  FlashingIconManager_o *v2; // x19
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4B011A9 & 1) == 0 )
  {
    this = (FlashingIconManager_o *)sub_1BC3008(
                                      &Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__,
                                      method);
    byte_4B011A9 = 1;
  }
  flashIconList = v2->fields.flashIconList;
  v2->fields.dispTime = 0.0;
  if ( !flashIconList )
    sub_1BC3264(this, method);
  size = flashIconList->fields._size;
  v5 = flashIconList->fields._version + 1;
  flashIconList->fields._size = 0;
  flashIconList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)flashIconList->fields._items, 0, size, 0LL);
}


void __fastcall FlashingIconManager__RemoveIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *flashIconList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  __int64 v16; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B011AB & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__,
      icon);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__,
      v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4B011AB = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
    if ( !flashIconList )
      sub_1BC3264(0LL, v11);
    if ( flashIconList->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        flashIconList,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v13 )
          break;
        current = v18.fields._current;
        if ( !v18.fields._current )
          sub_1BC3264(v13, v14);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v18.fields._current->klass->vtable[0].method)(
                v18.fields._current,
                icon,
                v18.fields._current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v17 = this->fields.flashIconList;
          if ( !v17 )
            sub_1BC3264(0LL, v16);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v17,
            current,
            (const MethodInfo_36A2368 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void __fastcall FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  float dispTime; // s8
  __int64 v7; // x1
  float deltaTime; // s0
  void *Item; // x0
  int32_t v10; // w20
  float v11; // s9
  _QWORD *v12; // x21
  float v13; // s0

  if ( (byte_4B011AC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__, v4);
    byte_4B011AC = 1;
  }
  flashIconList = this->fields.flashIconList;
  if ( flashIconList && flashIconList->fields._size )
  {
    dispTime = this->fields.dispTime;
    deltaTime = RealTime__get_deltaTime(0LL);
    Item = this->fields.flashIconList;
    this->fields.dispTime = dispTime + deltaTime;
    if ( !Item )
      goto LABEL_16;
    v10 = *((_DWORD *)Item + 6) - 1;
    if ( v10 >= 0 )
    {
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v10,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
        if ( !Item )
          break;
        v11 = *((float *)Item + 4);
        v12 = Item;
        v13 = fmodf(this->fields.dispTime, v11 + v11);
        Item = (void *)v12[3];
        if ( !Item )
          break;
        if ( v13 > v11 )
          v13 = (float)(v11 + v11) - v13;
        if ( !FlashingIconComponent__UpdateIcon((FlashingIconComponent_o *)Item, v13 / v11, 0LL) )
        {
          Item = this->fields.flashIconList;
          if ( !Item )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v10,
            (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v10 < 0 )
          return;
        Item = this->fields.flashIconList;
      }
      while ( Item );
LABEL_16:
      sub_1BC3264(Item, v7);
    }
  }
}


void __fastcall FlashingIconManager_FlashIconContents___ctor(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *icon,
        float cycleTime,
        const MethodInfo *method)
{
  FlashingIconManager_FlashIconContents_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._icon_k__BackingField = icon;
  v6 = (FlashingIconManager_FlashIconContents_o *)((char *)v6 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)v6, (int32_t)icon, v7, v8);
  *(float *)&v6[-1].fields._icon_k__BackingField = cycleTime;
}


float __fastcall FlashingIconManager_FlashIconContents__get_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._cycleTime_k__BackingField;
}


FlashingIconComponent_o *__fastcall FlashingIconManager_FlashIconContents__get_icon(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._icon_k__BackingField;
}


void __fastcall FlashingIconManager_FlashIconContents__set_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._cycleTime_k__BackingField = value;
}


void __fastcall FlashingIconManager_FlashIconContents__set_icon(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._icon_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._icon_k__BackingField, (int32_t)value, (int32_t)method, v3);
}