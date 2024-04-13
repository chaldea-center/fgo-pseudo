void __fastcall GiftListViewItemIcon___ctor(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GiftListViewItemIcon__OnClick(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  int32_t gifttype; // w8
  struct GiftEntity_o *itemData; // x1

  gifttype = this->fields.gifttype;
  if ( (unsigned int)(gifttype - 6) < 2 || gifttype == 2 || gifttype == 1 )
  {
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_9;
    if ( itemData->fields.objectId >= 1 )
    {
      this = (GiftListViewItemIcon_o *)this->fields.callbackFunc;
      if ( this )
      {
        GiftListViewItemIcon_ClickDelegate__Invoke((GiftListViewItemIcon_ClickDelegate_o *)this, itemData, 0LL);
        return;
      }
LABEL_9:
      sub_B5D69C(this, itemData);
    }
  }
}


void __fastcall GiftListViewItemIcon__Set(GiftListViewItemIcon_o *this, GiftEntity_o *indata, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct GiftEntity_o **p_itemData; // x20
  ItemIconComponent_o *item; // x0
  __int64 type; // x1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x5
  const MethodInfo *v14; // x6
  struct GiftEntity_o *v15; // x8
  int32_t objectId; // w2
  const MethodInfo *num; // x3

  this->fields.itemData = indata;
  p_itemData = &this->fields.itemData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemData,
    (System_Int32_array **)indata,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = *p_itemData;
  if ( !*p_itemData )
    goto LABEL_14;
  type = (unsigned int)v15->fields.type;
  this->fields.gifttype = type;
  if ( (unsigned int)(type - 6) < 2 )
  {
LABEL_5:
    item = this->fields.item;
    if ( item )
    {
      ItemIconComponent__SetFaceImage(item, v15->fields.objectId, v15->fields.limitCount, v15->fields.num, 1, 0, v14);
      return;
    }
LABEL_14:
    sub_B5D69C(item, type);
  }
  if ( (_DWORD)type == 11 )
  {
    item = this->fields.item;
    if ( !item )
      goto LABEL_14;
    ItemIconComponent__SetCommandCodeImage(item, v15->fields.objectId, v15->fields.num, v12);
  }
  else
  {
    if ( (_DWORD)type == 1 )
      goto LABEL_5;
    item = this->fields.item;
    objectId = v15->fields.objectId;
    num = (const MethodInfo *)(unsigned int)v15->fields.num;
    if ( (_DWORD)type == 2 )
    {
      if ( !item )
        goto LABEL_14;
      ItemIconComponent__SetItem(item, objectId, (int32_t)num, num);
    }
    else
    {
      if ( !item )
        goto LABEL_14;
      ItemIconComponent__SetGift(item, type, objectId, (int32_t)num, 0, v13);
    }
  }
}


void __fastcall GiftListViewItemIcon__SetCallBack(
        GiftListViewItemIcon_o *this,
        GiftListViewItemIcon_ClickDelegate_o *call,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callbackFunc = call;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)call,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall GiftListViewItemIcon__SetTouch(GiftListViewItemIcon_o *this, bool flg, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EA465 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EA465 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_srcLineSprite, flg, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(gameObject, v10);
  }
}


void __fastcall GiftListViewItemIcon__Show(GiftListViewItemIcon_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftListViewItemIcon_ClickDelegate___ctor(
        GiftListViewItemIcon_ClickDelegate_o *this,
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


System_IAsyncResult_o *__fastcall GiftListViewItemIcon_ClickDelegate__BeginInvoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        GiftEntity_o *gift,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)gift;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall GiftListViewItemIcon_ClickDelegate__EndInvoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall GiftListViewItemIcon_ClickDelegate__Invoke(
        GiftListViewItemIcon_ClickDelegate_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  GiftListViewItemIcon_ClickDelegate_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  GiftEntity_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(GiftEntity_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, GiftEntity_o *, _QWORD); // x0
  GiftListViewItemIcon_ClickDelegate_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(GiftEntity_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  GiftEntity_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  GiftListViewItemIcon_ClickDelegate_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (GiftListViewItemIcon_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(GiftEntity_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, gift, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = gift->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&gift->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&gift->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(gift, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&gift->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(GiftEntity_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(gift, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = gift->klass;
                if ( *(_WORD *)&gift->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&gift->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(gift, class_0, v9, v11);
                }
                (*(void (__fastcall **)(GiftEntity_o *, _QWORD))v15)(gift, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(GiftEntity_o *, _QWORD))&gift->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  gift,
                  *((_QWORD *)&gift->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(gift, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, GiftEntity_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, gift, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, GiftEntity_o *, _QWORD))v23)(v31, gift, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, GiftEntity_o *, _QWORD))(*v31
                                                                        + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                        + 312))(
                v31,
                gift,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, GiftEntity_o *, __int64))v32)(v31, gift, v30);
    }
  }
}