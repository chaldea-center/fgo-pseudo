void __fastcall BattleNextTDgaugeComponent___ctor(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.width = 13.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__changeGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t index,
        int32_t type,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  Il2CppObject *Component_object; // x0
  __int64 *v13; // x8

  v6 = this;
  if ( (byte_49FF1F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&index);
    sub_1B640C8(&StringLiteral_20054/*"icon_count_01"*/, v7);
    sub_1B640C8(&StringLiteral_20056/*"icon_count_bg"*/, v8);
    this = (BattleNextTDgaugeComponent_o *)sub_1B640C8(&StringLiteral_20055/*"icon_count_02"*/, v9);
    byte_49FF1F8 = 1;
  }
  gaugeList = v6->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( (int)max_length > index )
    {
      if ( type == 1 )
      {
        if ( max_length > index )
        {
          Component_object = (Il2CppObject *)gaugeList->m_Items[index];
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v13 = &StringLiteral_20054/*"icon_count_01"*/;
              goto LABEL_20;
            }
          }
LABEL_21:
          sub_1B64324(Component_object);
        }
      }
      else if ( type == 2 )
      {
        if ( max_length > index )
        {
          Component_object = (Il2CppObject *)gaugeList->m_Items[index];
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v13 = &StringLiteral_20055/*"icon_count_02"*/;
LABEL_20:
              UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v13, 0LL);
              return;
            }
          }
          goto LABEL_21;
        }
      }
      else if ( max_length > index )
      {
        Component_object = (Il2CppObject *)gaugeList->m_Items[index];
        if ( Component_object )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Component_object,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_object )
          {
            v13 = &StringLiteral_20056/*"icon_count_bg"*/;
            goto LABEL_20;
          }
        }
        goto LABEL_21;
      }
      sub_1B6432C(this, *(_QWORD *)&index);
    }
  }
}


void __fastcall BattleNextTDgaugeComponent__setHide(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeFrontRoot; // x0

  gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
  if ( !gaugeFrontRoot
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL),
        (gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeBackRoot) == 0LL)
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL )
  {
    sub_1B64324(gaugeFrontRoot);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setInitGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t now,
        int32_t max,
        bool isTDSeraled,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x25
  __int64 v14; // x8
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x23
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  __int64 v18; // x8
  unsigned __int64 v19; // x27
  UnityEngine_Object_o *v20; // x25
  int32_t v21; // w2
  char v22; // w3
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v24; // w27
  bool v25; // w1
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x25
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x24
  int v32; // w28
  UnityEngine_GameObject_o *v33; // x26
  int32_t v34; // w2
  char v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  UnityEngine_GameObject_o *v40; // x26
  int32_t v41; // w2
  char v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  System_Object_array *v47; // x0
  int32_t v48; // w2
  char v49; // w3
  int32_t v50; // w20
  System_Object_array *v51; // x0
  int32_t v52; // w2
  char v53; // w3
  const MethodInfo *v54; // x2
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_49FF1F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, *(_QWORD *)&now);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    this = (BattleNextTDgaugeComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49FF1F6 = 1;
  }
  gaugeList = v8->fields.gaugeList;
  if ( gaugeList )
  {
    v14 = *(_QWORD *)&gaugeList->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      while ( v15 < (unsigned int)v14 )
      {
        v16 = (UnityEngine_Object_o *)gaugeList->m_Items[v15];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(v16, 0LL);
        LODWORD(v14) = gaugeList->max_length;
        if ( (__int64)++v15 >= (int)v14 )
          goto LABEL_10;
      }
LABEL_54:
      sub_1B6432C(this, *(_QWORD *)&now);
    }
  }
LABEL_10:
  gaugebackList = v8->fields.gaugebackList;
  if ( gaugebackList )
  {
    v18 = *(_QWORD *)&gaugebackList->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      while ( v19 < (unsigned int)v18 )
      {
        v20 = (UnityEngine_Object_o *)gaugebackList->m_Items[v19];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(v20, 0LL);
        LODWORD(v18) = gaugebackList->max_length;
        if ( (__int64)++v19 >= (int)v18 )
          goto LABEL_17;
      }
      goto LABEL_54;
    }
  }
LABEL_17:
  v8->fields.gaugeList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.gaugeList, 0, max, isTDSeraled);
  v8->fields.gaugebackList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.gaugebackList, 0, v21, v22);
  gaugeFrontRoot = (UnityEngine_Component_o *)v8->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v24 = 0;
  else
    v24 = max;
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  if ( v24 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v8->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    v25 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v8->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    v25 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v25, 0LL);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v24 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v8,
                                                    v8->fields.gaugeIcon,
                                                    v8->fields.gaugeFrontRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v33 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v55.fields.y = 0.0;
      v55.fields.z = 0.0;
      v55.fields.x = v8->fields.width * (float)v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v55, 0LL);
      if ( !v28 )
        goto LABEL_53;
      items = v28->fields._items;
      v37 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v28->fields._version;
      if ( !items )
        goto LABEL_53;
      size = v28->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)v33,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v33;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v33, v34, v35);
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v8,
                                                    v8->fields.gaugebackIcon,
                                                    v8->fields.gaugeBackRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v40 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v40, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v56.fields.y = 0.0;
      v56.fields.z = 0.0;
      v56.fields.x = v8->fields.width * (float)v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v56, 0LL);
      if ( !v31 )
        goto LABEL_53;
      v43 = v31->fields._items;
      v44 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v31->fields._version;
      if ( !v43 )
        goto LABEL_53;
      v45 = v31->fields._size;
      if ( (unsigned int)v45 >= v43->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)v40,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &v43->obj.klass + v45;
        v31->fields._size = v45 + 1;
        v46[4] = (Il2CppClass *)v40;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
      }
      if ( v24 == ++v32 )
        goto LABEL_48;
    }
  }
  if ( !v28 )
    goto LABEL_53;
LABEL_48:
  v47 = System_Collections_Generic_List_object___ToArray(
          v28,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v8->fields.gaugeList = (struct UnityEngine_GameObject_array *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.gaugeList, (int32_t)v47, v48, v49);
  if ( !v31 )
LABEL_53:
    sub_1B64324(gaugeFrontRoot);
  if ( isTDSeraled )
    v50 = 0;
  else
    v50 = now;
  v51 = System_Collections_Generic_List_object___ToArray(
          v31,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v8->fields.gaugebackList = (struct UnityEngine_GameObject_array *)v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.gaugebackList, (int32_t)v51, v52, v53);
  BattleNextTDgaugeComponent__setValue(v8, v50, v54);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x8
  struct UnityEngine_GameObject_array *v9; // x8
  int32_t v10; // w21
  int32_t v11; // w22
  int32_t v12; // w2
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_Object_o *v14; // x21
  Il2CppObject *Component_object; // x20
  int v16; // w8
  bool v17; // w1
  UnityEngine_Behaviour_o *v18; // x0

  if ( (byte_49FF1F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, *(_QWORD *)&nextVal);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FF1F7 = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    v9 = *(struct UnityEngine_GameObject_array **)&gaugeList->max_length;
    if ( v9 )
    {
      if ( (int)v9 >= 1 )
      {
        v10 = 0;
        v11 = (_DWORD)v9 - nextVal;
        while ( 1 )
        {
          v12 = v11 == (_DWORD)v9 ? 2 : v11 > v10;
          BattleNextTDgaugeComponent__changeGauge(this, v10, v12, v3);
          v9 = this->fields.gaugeList;
          if ( !v9 )
            break;
          LODWORD(v9) = v9->max_length;
          if ( ++v10 >= (int)v9 )
            goto LABEL_12;
        }
LABEL_32:
        sub_1B64324(gaugeFrontRoot);
      }
LABEL_12:
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_32;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_32;
      v14 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                           (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_object,
                                                      0LL,
                                                      0LL);
        if ( ((unsigned __int8)gaugeFrontRoot & 1) != 0 )
        {
          if ( nextVal == 1 )
          {
            if ( !Component_object )
              goto LABEL_32;
            v16 = 1060320051;
          }
          else
          {
            if ( nextVal )
            {
              if ( !v14 )
                goto LABEL_32;
              gaugeFrontRoot = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v14->klass[1]._1.castClass)(
                                                            v14,
                                                            v14->klass[1]._1.declaringType,
                                                            1.0);
              if ( !Component_object )
                goto LABEL_32;
              v18 = (UnityEngine_Behaviour_o *)Component_object;
              v17 = 0;
              goto LABEL_31;
            }
            if ( !Component_object )
              goto LABEL_32;
            v16 = 1050253722;
          }
          v17 = 1;
          LODWORD(Component_object[3].monitor) = v16;
          v18 = (UnityEngine_Behaviour_o *)Component_object;
LABEL_31:
          UnityEngine_Behaviour__set_enabled(v18, v17, 0LL);
        }
      }
    }
  }
}