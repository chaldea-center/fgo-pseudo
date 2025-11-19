void BattleNextTDgaugeComponent___ctor(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.width = 13.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleNextTDgaugeComponent__changeGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t index,
        int32_t type,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v6; // x21
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  Il2CppObject *Component_object; // x0
  __int64 *v10; // x8

  v6 = this;
  if ( (byte_4CB980E & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C6BA08(&StringLiteral_20242/*"icon_count_01"*/);
    sub_1C6BA08(&StringLiteral_20244/*"icon_count_bg"*/);
    this = (BattleNextTDgaugeComponent_o *)sub_1C6BA08(&StringLiteral_20243/*"icon_count_02"*/);
    byte_4CB980E = 1;
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
                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v10 = &StringLiteral_20242/*"icon_count_01"*/;
              goto LABEL_20;
            }
          }
LABEL_21:
          sub_1C6BC60(Component_object, *(_QWORD *)&index);
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
                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v10 = &StringLiteral_20243/*"icon_count_02"*/;
LABEL_20:
              UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v10, 0);
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
                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_object )
          {
            v10 = &StringLiteral_20244/*"icon_count_bg"*/;
            goto LABEL_20;
          }
        }
        goto LABEL_21;
      }
      sub_1C6BC68(this);
    }
  }
}


void BattleNextTDgaugeComponent__setHide(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeFrontRoot; // x0

  gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
  if ( !gaugeFrontRoot
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0),
        (gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeBackRoot) == 0)
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0)) == 0 )
  {
    sub_1C6BC60(gaugeFrontRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleNextTDgaugeComponent__setInitGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t now,
        int32_t max,
        bool isTDSeraled,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v8; // x19
  struct UnityEngine_GameObject_array *gaugeList; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x26
  UnityEngine_Object_o *v12; // x23
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  il2cpp_array_size_t v14; // x8
  unsigned __int64 v15; // x27
  UnityEngine_Object_o *v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v21; // w27
  bool v22; // w1
  System_Collections_Generic_List_object__o *v23; // x25
  System_Collections_Generic_List_object__o *v24; // x24
  int v25; // w28
  UnityEngine_GameObject_o *v26; // x26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  UnityEngine_GameObject_o *v33; // x26
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_Object_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w20
  System_Object_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4CB980C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_GameObject__TypeInfo);
    this = (BattleNextTDgaugeComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB980C = 1;
  }
  gaugeList = v8->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      while ( v11 < (unsigned int)max_length )
      {
        v12 = (UnityEngine_Object_o *)gaugeList->m_Items[v11];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71659676(v12, 0);
        LODWORD(max_length) = gaugeList->max_length;
        if ( (__int64)++v11 >= (int)max_length )
          goto LABEL_10;
      }
LABEL_54:
      sub_1C6BC68(this);
    }
  }
LABEL_10:
  gaugebackList = v8->fields.gaugebackList;
  if ( gaugebackList )
  {
    v14 = gaugebackList->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0;
      while ( v15 < (unsigned int)v14 )
      {
        v16 = (UnityEngine_Object_o *)gaugebackList->m_Items[v15];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71659676(v16, 0);
        LODWORD(v14) = gaugebackList->max_length;
        if ( (__int64)++v15 >= (int)v14 )
          goto LABEL_17;
      }
      goto LABEL_54;
    }
  }
LABEL_17:
  v8->fields.gaugeList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->fields.gaugeList, 0, max, (const MethodInfo *)isTDSeraled);
  v8->fields.gaugebackList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->fields.gaugebackList, 0, v17, v18);
  gaugeFrontRoot = (UnityEngine_Component_o *)v8->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v21 = 0;
  else
    v21 = max;
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0);
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  if ( v21 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0);
    gaugeFrontRoot = (UnityEngine_Component_o *)v8->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0);
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    v22 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0);
    gaugeFrontRoot = (UnityEngine_Component_o *)v8->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0);
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    v22 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v22, 0);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v21 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v8,
                                                    v8->fields.gaugeIcon,
                                                    v8->fields.gaugeFrontRoot,
                                                    0,
                                                    0);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v26 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v26, 0);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v48.fields.y = 0.0;
      v48.fields.z = 0.0;
      v48.fields.x = v8->fields.width * (float)v25;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v48, 0);
      if ( !v23 )
        goto LABEL_53;
      items = v23->fields._items;
      v30 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v23->fields._version;
      if ( !items )
        goto LABEL_53;
      size = v23->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v26,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v26;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v8,
                                                    v8->fields.gaugebackIcon,
                                                    v8->fields.gaugeBackRoot,
                                                    0,
                                                    0);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v33 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v33, 0);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v49.fields.y = 0.0;
      v49.fields.z = 0.0;
      v49.fields.x = v8->fields.width * (float)v25;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v49, 0);
      if ( !v24 )
        goto LABEL_53;
      v36 = v24->fields._items;
      v37 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v24->fields._version;
      if ( !v36 )
        goto LABEL_53;
      v38 = v24->fields._size;
      if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)v33,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &v36->obj.klass + v38;
        v24->fields._size = v38 + 1;
        v39[4] = (Il2CppClass *)v33;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v33, v34, v35);
      }
      if ( v21 == ++v25 )
        goto LABEL_48;
    }
  }
  if ( !v23 )
    goto LABEL_53;
LABEL_48:
  v40 = System_Collections_Generic_List_object___ToArray(
          v23,
          (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v8->fields.gaugeList = (struct UnityEngine_GameObject_array *)v40;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->fields.gaugeList, (int32_t)v40, v41, v42);
  if ( !v24 )
LABEL_53:
    sub_1C6BC60(gaugeFrontRoot, v19);
  if ( isTDSeraled )
    v43 = 0;
  else
    v43 = now;
  v44 = System_Collections_Generic_List_object___ToArray(
          v24,
          (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v8->fields.gaugebackList = (struct UnityEngine_GameObject_array *)v44;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->fields.gaugebackList, (int32_t)v44, v45, v46);
  BattleNextTDgaugeComponent__setValue(v8, v43, v47);
}


// local variable allocation has failed, the output may be wrong!
void BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UnityEngine_GameObject_array *gaugeList; // x8
  struct UnityEngine_GameObject_array *max_length; // x8
  int32_t v8; // w21
  int32_t v9; // w22
  int32_t v10; // w2
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_Object_o *v12; // x21
  Il2CppObject *Component_object; // x20
  int v14; // w8
  bool v15; // w1
  UnityEngine_Behaviour_o *v16; // x0

  if ( (byte_4CB980D & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB980D = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = (struct UnityEngine_GameObject_array *)gaugeList->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v8 = 0;
        v9 = (_DWORD)max_length - nextVal;
        while ( 1 )
        {
          v10 = v9 == (_DWORD)max_length ? 2 : v9 > v8;
          BattleNextTDgaugeComponent__changeGauge(this, v8, v10, v3);
          max_length = this->fields.gaugeList;
          if ( !max_length )
            break;
          LODWORD(max_length) = max_length->max_length;
          if ( ++v8 >= (int)max_length )
            goto LABEL_12;
        }
LABEL_32:
        sub_1C6BC60(gaugeFrontRoot, *(_QWORD *)&nextVal);
      }
LABEL_12:
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_32;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_32;
      v12 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                           (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_object,
                                                      0,
                                                      0);
        if ( ((unsigned __int8)gaugeFrontRoot & 1) != 0 )
        {
          if ( nextVal == 1 )
          {
            if ( !Component_object )
              goto LABEL_32;
            v14 = 1060320051;
          }
          else
          {
            if ( nextVal )
            {
              if ( !v12 )
                goto LABEL_32;
              gaugeFrontRoot = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v12->klass[1]._1.element_class)(
                                                            v12,
                                                            v12->klass[1]._1.castClass,
                                                            1.0);
              if ( !Component_object )
                goto LABEL_32;
              v16 = (UnityEngine_Behaviour_o *)Component_object;
              v15 = 0;
              goto LABEL_31;
            }
            if ( !Component_object )
              goto LABEL_32;
            v14 = 1050253722;
          }
          v15 = 1;
          LODWORD(Component_object[3].monitor) = v14;
          v16 = (UnityEngine_Behaviour_o *)Component_object;
LABEL_31:
          UnityEngine_Behaviour__set_enabled(v16, v15, 0);
        }
      }
    }
  }
}