void BattleNextTDgaugeComponent___ctor(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.width = 13.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


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
  if ( (byte_4C3AE3D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&StringLiteral_20175/*"icon_count_01"*/);
    sub_1C32C20(&StringLiteral_20177/*"icon_count_bg"*/);
    this = (BattleNextTDgaugeComponent_o *)sub_1C32C20(&StringLiteral_20176/*"icon_count_02"*/);
    byte_4C3AE3D = 1;
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
                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v10 = &StringLiteral_20175/*"icon_count_01"*/;
              goto LABEL_20;
            }
          }
LABEL_21:
          sub_1C32E7C(Component_object);
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
                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v10 = &StringLiteral_20176/*"icon_count_02"*/;
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
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_object )
          {
            v10 = &StringLiteral_20177/*"icon_count_bg"*/;
            goto LABEL_20;
          }
        }
        goto LABEL_21;
      }
      sub_1C32E84(this);
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
    sub_1C32E7C(gaugeFrontRoot);
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
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v20; // w27
  bool v21; // w1
  System_Collections_Generic_List_object__o *v22; // x25
  System_Collections_Generic_List_object__o *v23; // x24
  int v24; // w28
  UnityEngine_GameObject_o *v25; // x26
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  UnityEngine_GameObject_o *v32; // x26
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  System_Object_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w20
  System_Object_array *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x2
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4C3AE3B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    this = (BattleNextTDgaugeComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AE3B = 1;
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
        UnityEngine_Object__Destroy_71223640(v12, 0);
        LODWORD(max_length) = gaugeList->max_length;
        if ( (__int64)++v11 >= (int)max_length )
          goto LABEL_10;
      }
LABEL_54:
      sub_1C32E84(this);
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
        UnityEngine_Object__Destroy_71223640(v16, 0);
        LODWORD(v14) = gaugebackList->max_length;
        if ( (__int64)++v15 >= (int)v14 )
          goto LABEL_17;
      }
      goto LABEL_54;
    }
  }
LABEL_17:
  v8->fields.gaugeList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.gaugeList, 0, max, (const MethodInfo *)isTDSeraled);
  v8->fields.gaugebackList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.gaugebackList, 0, v17, v18);
  gaugeFrontRoot = (UnityEngine_Component_o *)v8->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v20 = 0;
  else
    v20 = max;
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0);
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  if ( v20 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0);
    gaugeFrontRoot = (UnityEngine_Component_o *)v8->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0);
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    v21 = 0;
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
    v21 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v21, 0);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v20 >= 1 )
  {
    v24 = 0;
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
      v25 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v25, 0);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v47.fields.y = 0.0;
      v47.fields.z = 0.0;
      v47.fields.x = v8->fields.width * (float)v24;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v47, 0);
      if ( !v22 )
        goto LABEL_53;
      items = v22->fields._items;
      v29 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v22->fields._version;
      if ( !items )
        goto LABEL_53;
      size = v22->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v25,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v25;
        sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v25, v26, v27);
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v8,
                                                    v8->fields.gaugebackIcon,
                                                    v8->fields.gaugeBackRoot,
                                                    0,
                                                    0);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v32 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v32, 0);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v48.fields.y = 0.0;
      v48.fields.z = 0.0;
      v48.fields.x = v8->fields.width * (float)v24;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v48, 0);
      if ( !v23 )
        goto LABEL_53;
      v35 = v23->fields._items;
      v36 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v23->fields._version;
      if ( !v35 )
        goto LABEL_53;
      v37 = v23->fields._size;
      if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v32,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &v35->obj.klass + v37;
        v23->fields._size = v37 + 1;
        v38[4] = (Il2CppClass *)v32;
        sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
      }
      if ( v20 == ++v24 )
        goto LABEL_48;
    }
  }
  if ( !v22 )
    goto LABEL_53;
LABEL_48:
  v39 = System_Collections_Generic_List_object___ToArray(
          v22,
          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v8->fields.gaugeList = (struct UnityEngine_GameObject_array *)v39;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.gaugeList, (int32_t)v39, v40, v41);
  if ( !v23 )
LABEL_53:
    sub_1C32E7C(gaugeFrontRoot);
  if ( isTDSeraled )
    v42 = 0;
  else
    v42 = now;
  v43 = System_Collections_Generic_List_object___ToArray(
          v23,
          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v8->fields.gaugebackList = (struct UnityEngine_GameObject_array *)v43;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.gaugebackList, (int32_t)v43, v44, v45);
  BattleNextTDgaugeComponent__setValue(v8, v42, v46);
}


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

  if ( (byte_4C3AE3C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AE3C = 1;
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
        sub_1C32E7C(gaugeFrontRoot);
      }
LABEL_12:
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_32;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_32;
      v12 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                           (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
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