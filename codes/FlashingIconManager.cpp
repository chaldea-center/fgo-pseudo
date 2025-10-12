void FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C36B15 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
    byte_4C36B15 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this->fields.flashIconList = (struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.flashIconList, (int32_t)v3, v4, v5);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
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
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct FlashingIconManager_FlashIconContents_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  CGThumbnailListItem_o *v21; // x0
  int32_t v22; // w1
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v23; // x21
  __int64 v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct FlashingIconManager_FlashIconContents_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x8
  System_Collections_Generic_List_object__o *v32; // x0
  Il2CppObject *v33; // x1

  if ( (byte_4C36B12 & 1) == 0 )
  {
    sub_1C32C20(&FlashingIconManager_FlashIconContents_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36B12 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0, 0) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v9);
    if ( isFast )
    {
      flashIconList = this->fields.flashIconList;
      v11 = sub_1C32E6C(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      *(_QWORD *)(v11 + 24) = icon;
      sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 24), (int32_t)icon, v12, v13);
      *(_DWORD *)(v11 + 16) = 1056964608;
      if ( flashIconList )
      {
        items = flashIconList->fields._items;
        v18 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
        ++flashIconList->fields._version;
        if ( items )
        {
          size = flashIconList->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
          {
            v20 = &items->obj.klass + size;
            flashIconList->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            v21 = (CGThumbnailListItem_o *)(v20 + 4);
            v22 = v11;
LABEL_18:
            sub_1C32BC4(v21, v22, v15, v16);
            return;
          }
          v31 = v18[4];
          v32 = (System_Collections_Generic_List_object__o *)flashIconList;
          v33 = (Il2CppObject *)v11;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            v33,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v31 + 192) + 112LL));
          return;
        }
      }
    }
    else
    {
      v23 = this->fields.flashIconList;
      v24 = sub_1C32E6C(FlashingIconManager_FlashIconContents_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0);
      *(_QWORD *)(v24 + 24) = icon;
      sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 24), (int32_t)icon, v25, v26);
      if ( extraCycleTime <= 0.0 )
      {
        *(_DWORD *)(v24 + 16) = 1065353216;
        if ( !v23 )
          goto LABEL_22;
      }
      else
      {
        *(float *)(v24 + 16) = extraCycleTime;
        if ( !v23 )
          goto LABEL_22;
      }
      v27 = v23->fields._items;
      v28 = Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__;
      ++v23->fields._version;
      if ( v27 )
      {
        v29 = v23->fields._size;
        if ( (unsigned int)v29 < LODWORD(v27->max_length) )
        {
          v30 = &v27->obj.klass + v29;
          v23->fields._size = v29 + 1;
          v30[4] = (Il2CppClass *)v24;
          v21 = (CGThumbnailListItem_o *)(v30 + 4);
          v22 = v24;
          goto LABEL_18;
        }
        v31 = v28[4];
        v32 = (System_Collections_Generic_List_object__o *)v23;
        v33 = (Il2CppObject *)v24;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1C32E7C(v14);
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
  if ( (byte_4C36B11 & 1) == 0 )
  {
    this = (FlashingIconManager_o *)sub_1C32C20(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
    byte_4C36B11 = 1;
  }
  flashIconList = v2->fields.flashIconList;
  v2->fields.dispTime = 0.0;
  if ( !flashIconList )
    sub_1C32E7C(this);
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
  System_Collections_Generic_List_object__o *flashIconList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C36B13 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36B13 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0, 0) )
  {
    flashIconList = (System_Collections_Generic_List_object__o *)this->fields.flashIconList;
    if ( !flashIconList )
      sub_1C32E7C(0);
    if ( flashIconList->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v9,
        flashIconList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v9,
               (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v6 )
          break;
        current = v9.fields._current;
        if ( !v9.fields._current )
          sub_1C32E7C(v6);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, const MethodInfo *))v9.fields._current->klass->vtable[0].methodPtr)(
                v9.fields._current,
                icon,
                v9.fields._current->klass->vtable[0].method)
            & 1) != 0 )
        {
          v8 = this->fields.flashIconList;
          if ( !v8 )
            sub_1C32E7C(0);
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)v8,
            current,
            (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v9,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_FlashingIconManager_FlashIconContents__o *flashIconList; // x8
  float dispTime; // s8
  float deltaTime; // s0
  void *Item; // x0
  int32_t v7; // w20
  float v8; // s9
  _QWORD *v9; // x21
  float v10; // s0

  if ( (byte_4C36B14 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
    byte_4C36B14 = 1;
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
    v7 = *((_DWORD *)Item + 6) - 1;
    if ( v7 >= 0 )
    {
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v7,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
        if ( !Item )
          break;
        v8 = *((float *)Item + 4);
        v9 = Item;
        v10 = fmodf(this->fields.dispTime, v8 + v8);
        Item = (void *)v9[3];
        if ( !Item )
          break;
        if ( v10 > v8 )
          v10 = (float)(v8 + v8) - v10;
        if ( !FlashingIconComponent__UpdateIcon((FlashingIconComponent_o *)Item, v10 / v8, 0) )
        {
          Item = this->fields.flashIconList;
          if ( !Item )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v7,
            (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v7 < 0 )
          return;
        Item = this->fields.flashIconList;
      }
      while ( Item );
LABEL_16:
      sub_1C32E7C(Item);
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
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._icon_k__BackingField = icon;
  v6 = (FlashingIconManager_FlashIconContents_o *)((char *)v6 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)v6, (int32_t)icon, v7, v8);
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
  const MethodInfo *v3; // x3

  this->fields._icon_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._icon_k__BackingField, (int32_t)value, (int32_t)method, v3);
}