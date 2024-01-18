void __fastcall ServantStatusCharaGraphViewerListViewIndicator___ctor(
        ServantStatusCharaGraphViewerListViewIndicator_o *this,
        const MethodInfo *method)
{
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphViewerListViewIndicator__Init(
        ServantStatusCharaGraphViewerListViewIndicator_o *this,
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyCenter,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onModifyCenterItem = onModifyCenter;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onModifyCenterItem,
    (System_Int32_array **)onModifyCenter,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantStatusCharaGraphViewerListViewIndicator__OnModifyCenterItem(
        ServantStatusCharaGraphViewerListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        bool isTop,
        bool isBottom,
        bool isLeft,
        bool isRight,
        const MethodInfo *method)
{
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *onModifyCenterItem; // x0
  __int64 v11; // x10
  ListViewItem_o *v12; // x1

  if ( (byte_4185FEB & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusCharaGraphListViewItem_TypeInfo, manager);
    byte_4185FEB = 1;
  }
  onModifyCenterItem = this->fields.onModifyCenterItem;
  if ( onModifyCenterItem )
  {
    if ( item
      && (v11 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
    {
      if ( (ServantStatusCharaGraphListViewItem_c *)item->klass->_2.typeHierarchy[v11 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
        v12 = item;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__Invoke(
      onModifyCenterItem,
      (ServantStatusCharaGraphListViewItem_o *)v12,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent___ctor(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__BeginInvoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)item;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__EndInvoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent__Invoke(
        ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  ServantStatusCharaGraphListViewItem_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(ServantStatusCharaGraphListViewItem_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, ServantStatusCharaGraphListViewItem_o *, _QWORD); // x0
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(ServantStatusCharaGraphListViewItem_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  ServantStatusCharaGraphListViewItem_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantStatusCharaGraphViewerListViewIndicator_OnModifyCenterEvent_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(ServantStatusCharaGraphListViewItem_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, item, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = item->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&item->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&item->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(item, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&item->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(ServantStatusCharaGraphListViewItem_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(item, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = item->klass;
                if ( *(_WORD *)&item->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&item->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(item, class_0, v10, v12);
                }
                (*(void (__fastcall **)(ServantStatusCharaGraphListViewItem_o *, _QWORD))v16)(
                  item,
                  *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(ServantStatusCharaGraphListViewItem_o *, _QWORD))&item->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  item,
                  *((_QWORD *)&item->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(item, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, ServantStatusCharaGraphListViewItem_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, item, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, ServantStatusCharaGraphListViewItem_o *, _QWORD))v24)(
                v32,
                item,
                *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, ServantStatusCharaGraphListViewItem_o *, _QWORD))(*v32
                                                                                                 + 16LL
                                                                                                 * *(unsigned __int16 *)(v31 + 72)
                                                                                                 + 312))(
                v32,
                item,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, ServantStatusCharaGraphListViewItem_o *, __int64))v33)(v32, item, v31);
    }
  }
}