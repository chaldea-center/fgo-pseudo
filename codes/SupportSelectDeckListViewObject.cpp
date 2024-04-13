void __fastcall SupportSelectDeckListViewObject___ctor(
        SupportSelectDeckListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB3AA & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3AA = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SupportSelectDeckListViewObject__Awake(
        SupportSelectDeckListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct SupportSelectDeckListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB3A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42EB3A7 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct SupportSelectDeckListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            dispObject,
                                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportSelectDeckListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall SupportSelectDeckListViewObject__Init(
        SupportSelectDeckListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  SupportSelectDeckListViewItem_c *v10; // x10
  struct ListViewItem_o *v11; // x21
  UnityEngine_Object_o *itemDraw; // x20
  SupportSelectDeckListViewItemDraw_o *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4

  if ( (byte_42EB3A8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SupportSelectDeckListViewItem_TypeInfo, v5, v6, v7);
    byte_42EB3A8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&SupportSelectDeckListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      v10 = (SupportSelectDeckListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1];
      v11 = v10 == SupportSelectDeckListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v10 == SupportSelectDeckListViewItem_TypeInfo )
      {
        itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v13 = (SupportSelectDeckListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
        if ( ((unsigned __int8)v13 & 1) != 0 )
        {
          if ( !v11 || (v13 = this->fields.itemDraw) == 0LL )
            sub_B5D69C(v13, v14);
          SupportSelectDeckListViewItemDraw__SetSupportData(
            v13,
            (SupportServantData_o *)v11[1].klass,
            (bool)v11[1].monitor,
            BYTE1(v11[1].monitor),
            v15);
        }
      }
    }
  }
}


void __fastcall SupportSelectDeckListViewObject__OnSelected(
        SupportSelectDeckListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  ListViewItem_c *klass; // x9
  SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected; // x0

  if ( (byte_42EB3A9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SupportSelectDeckListViewItem_TypeInfo, v5, v6, v7);
    byte_42EB3A9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v9 = *(&SupportSelectDeckListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9)
    && (SupportSelectDeckListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == SupportSelectDeckListViewItem_TypeInfo
    && (klass = linkItem[1].klass) != 0LL
    && BYTE1(linkItem[1].monitor) )
  {
    onSelected = this->fields.onSelected;
    if ( onSelected )
      SupportSelectDeckListViewObject_OnSelectEvent__Invoke(onSelected, (int32_t)klass->_1.interopData, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewObject__SetMode(
        SupportSelectDeckListViewObject_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onSelected = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onSelected,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ((void (__fastcall *)(SupportSelectDeckListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    mode == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall SupportSelectDeckListViewObject__SetMode_30181596(
        SupportSelectDeckListViewObject_o *this,
        int32_t mode,
        SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onSelected = onSelected;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onSelected,
    (System_Int32_array **)onSelected,
    (System_String_array **)onSelected,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ((void (__fastcall *)(SupportSelectDeckListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    mode == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall SupportSelectDeckListViewObject__add_onSelected(
        SupportSelectDeckListViewObject_o *this,
        SupportSelectDeckListViewObject_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v7; // x21
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportSelectDeckListViewObject_o *v12; // x0
  SupportSelectDeckListViewObject_OnSelectEvent_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB3A5 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB3A5 = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v7 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportSelectDeckListViewObject_OnSelectEvent_c *)v9->klass != SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onSelected, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportSelectDeckListViewObject__remove_onSelected(v12, v13, v14);
}


void __fastcall SupportSelectDeckListViewObject__remove_onSelected(
        SupportSelectDeckListViewObject_o *this,
        SupportSelectDeckListViewObject_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportSelectDeckListViewObject_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v7; // x21
  struct SupportSelectDeckListViewObject_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportSelectDeckListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB3A6 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB3A6 = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v7 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportSelectDeckListViewObject_OnSelectEvent_c *)v9->klass != SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onSelected, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportSelectDeckListViewObject__Awake(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectDeckListViewObject_OnSelectEvent___ctor(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall SupportSelectDeckListViewObject_OnSelectEvent__BeginInvoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        int32_t deckId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = deckId;
  if ( (byte_42E6484 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, deckId, (_DWORD)callback, object);
    byte_42E6484 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall SupportSelectDeckListViewObject_OnSelectEvent__EndInvoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectDeckListViewObject_OnSelectEvent__Invoke(
        SupportSelectDeckListViewObject_OnSelectEvent_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SupportSelectDeckListViewObject_OnSelectEvent_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  SupportSelectDeckListViewObject_OnSelectEvent_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  SupportSelectDeckListViewObject_OnSelectEvent_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SupportSelectDeckListViewObject_OnSelectEvent_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&deckId, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)deckId, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)deckId, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)deckId, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)deckId,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)deckId, v21);
    goto LABEL_37;
  }
}