void __fastcall BattleServantShowBuffComponent___ctor(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB294 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42EB294 = 1;
  }
  this->fields.maxLine = 2;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleServantShowBuffComponent__CreateBuffObj(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *Object; // x21
  const MethodInfo *v10; // x3
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0
  __int64 v12; // x1
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  __int64 v14; // x0

  if ( (byte_42EB28F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v6, v7, v8);
    byte_42EB28F = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.IconClone,
             this->fields.listTr,
             0LL,
             0LL);
  BattleServantShowBuffComponent__UpdatePosition(this, Object, index, v10);
  if ( !Object )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Object,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_9;
  if ( datalist->max_length <= index )
  {
    v14 = sub_B5D6C8(Component_srcLineSprite);
    sub_B5D668(v14, 0LL);
  }
  if ( !Component_srcLineSprite
    || (BattleServantBuffIconComponent__setIcon_21093468(Component_srcLineSprite, datalist->m_Items[index], 0LL),
        (Component_srcLineSprite = (BattleServantBuffIconComponent_o *)this->fields.objList) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(Component_srcLineSprite, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleServantShowBuffComponent__HideBuffObject(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantShowBuffComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_GameObject__o *objList; // x22
  unsigned int v12; // w20
  int32_t size; // w8
  _DWORD *monitor; // x10
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int max_length; // w9
  int v17; // w10
  unsigned int v18; // w11
  BattleBuffData_ShowBuffData_o *v19; // x12
  __int64 v20; // x0

  v4 = this;
  if ( (byte_42EB290 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    this = (BattleServantShowBuffComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                                 v8,
                                                 v9,
                                                 v10);
    byte_42EB290 = 1;
  }
  objList = v4->fields.objList;
  if ( !objList )
    goto LABEL_20;
  v12 = 0;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( (int)v12 >= size )
      break;
    if ( size <= v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (BattleServantShowBuffComponent_o *)objList->fields._items->m_Items[v12];
    if ( !this )
      goto LABEL_20;
    this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !this )
      goto LABEL_20;
    monitor = this[1].monitor;
    if ( monitor )
    {
      datalist = v4->fields.datalist;
      if ( !datalist )
        goto LABEL_20;
      max_length = datalist->max_length;
      if ( max_length >= 1 )
      {
        v17 = monitor[9];
        v18 = 0;
        while ( 1 )
        {
          if ( v18 >= max_length )
          {
            v20 = sub_B5D6C8(this);
            sub_B5D668(v20, 0LL);
          }
          v19 = datalist->m_Items[v18];
          if ( !v19 )
            break;
          if ( v17 == v19->fields.addOrder )
            goto LABEL_19;
          if ( (int)++v18 >= max_length )
            goto LABEL_18;
        }
LABEL_20:
        sub_B5D69C(this, method);
      }
LABEL_18:
      BattleServantBuffIconComponent__setIcon_21093468((BattleServantBuffIconComponent_o *)this, 0LL, 0LL);
    }
LABEL_19:
    objList = v4->fields.objList;
    ++v12;
    if ( !objList )
      goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__NewBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantShowBuffComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_GameObject__o *objList; // x24
  __int64 v13; // x21
  int size; // w8
  unsigned int v15; // w22
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  const MethodInfo *v17; // x3
  struct System_Collections_Generic_List_GameObject__o *v18; // x23
  __int64 v19; // x0

  v5 = this;
  if ( (byte_42EB292 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6, v7, v8);
    this = (BattleServantShowBuffComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                                 v9,
                                                 v10,
                                                 v11);
    byte_42EB292 = 1;
  }
  objList = v5->fields.objList;
  if ( !objList )
    goto LABEL_12;
  v13 = 4LL;
  while ( 1 )
  {
    size = objList->fields._size;
    v15 = v13 - 4;
    if ( (int)v13 - 4 >= size )
    {
      BattleServantShowBuffComponent__CreateBuffObj(v5, index, method);
      return;
    }
    if ( size <= v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (BattleServantShowBuffComponent_o *)*((_QWORD *)&objList->fields._items->obj.klass + v13);
    if ( !this )
      goto LABEL_12;
    this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !this )
      goto LABEL_12;
    if ( !this[1].monitor )
      break;
    objList = v5->fields.objList;
    ++v13;
    if ( !objList )
      goto LABEL_12;
  }
  datalist = v5->fields.datalist;
  if ( !datalist )
    goto LABEL_12;
  if ( datalist->max_length <= index )
  {
    v19 = sub_B5D6C8(this);
    sub_B5D668(v19, 0LL);
  }
  BattleServantBuffIconComponent__setIcon_21093468(
    (BattleServantBuffIconComponent_o *)this,
    datalist->m_Items[index],
    0LL);
  v18 = v5->fields.objList;
  if ( !v18 )
LABEL_12:
    sub_B5D69C(this, *(_QWORD *)&index);
  if ( v18->fields._size <= v15 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  BattleServantShowBuffComponent__UpdatePosition(
    v5,
    *((UnityEngine_GameObject_o **)&v18->fields._items->obj.klass + v13),
    index,
    v17);
}


void __fastcall BattleServantShowBuffComponent__UpdateActiveBuffList(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantShowBuffComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_GameObject__o *objList; // x22
  __int64 v12; // x20
  int size; // w8

  v4 = this;
  if ( (byte_42EB293 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    this = (BattleServantShowBuffComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                                 v8,
                                                 v9,
                                                 v10);
    byte_42EB293 = 1;
  }
  objList = v4->fields.objList;
  if ( !objList )
LABEL_13:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( (int)v12 >= size )
      break;
    if ( size <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (BattleServantShowBuffComponent_o *)objList->fields._items->m_Items[v12];
    if ( this )
    {
      this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( this )
      {
        if ( this[1].monitor )
          BattleServantBuffIconComponent__UpdateActiveBuff((BattleServantBuffIconComponent_o *)this, 0LL);
        objList = v4->fields.objList;
        ++v12;
        if ( objList )
          continue;
      }
    }
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantShowBuffComponent__UpdateBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  BattleServantShowBuffComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_GameObject__o *objList; // x25
  __int64 v13; // x21
  int size; // w8
  unsigned int v15; // w24
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *datalist; // x9
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_GameObject__o *v20; // x22
  __int64 v21; // x0

  v4 = index;
  v5 = this;
  if ( (byte_42EB291 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6, v7, v8);
    this = (BattleServantShowBuffComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_GameObject__get_Item__,
                                                 v9,
                                                 v10,
                                                 v11);
    byte_42EB291 = 1;
  }
  objList = v5->fields.objList;
  if ( !objList )
    goto LABEL_16;
  v13 = 4LL;
  while ( 1 )
  {
    size = objList->fields._size;
    v15 = v13 - 4;
    if ( (int)v13 - 4 >= size )
      return 0;
    if ( size <= v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (BattleServantShowBuffComponent_o *)*((_QWORD *)&objList->fields._items->obj.klass + v13);
    if ( !this )
      goto LABEL_16;
    this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !this )
      goto LABEL_16;
    monitor = this[1].monitor;
    if ( monitor )
    {
      datalist = v5->fields.datalist;
      if ( !datalist )
        goto LABEL_16;
      if ( datalist->max_length <= v4 )
      {
        v21 = sub_B5D6C8(this);
        sub_B5D668(v21, 0LL);
      }
      *(_QWORD *)&index = datalist->m_Items[v4];
      if ( !*(_QWORD *)&index )
        goto LABEL_16;
      if ( *(_DWORD *)(*(_QWORD *)&index + 36LL) == monitor[9] )
        break;
    }
    objList = v5->fields.objList;
    ++v13;
    if ( !objList )
      goto LABEL_16;
  }
  BattleServantBuffIconComponent__setIcon_21093468(
    (BattleServantBuffIconComponent_o *)this,
    *(BattleBuffData_ShowBuffData_o **)&index,
    0LL);
  v20 = v5->fields.objList;
  if ( !v20 )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&index);
  if ( v20->fields._size <= v15 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  BattleServantShowBuffComponent__UpdatePosition(
    v5,
    *((UnityEngine_GameObject_o **)&v20->fields._items->obj.klass + v13),
    v4,
    v19);
  return 1;
}


void __fastcall BattleServantShowBuffComponent__UpdatePosition(
        BattleServantShowBuffComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  int32_t maxCount; // w21
  int maxLine; // w22
  BattleServantShowBuffComponent_o *v6; // x20
  int v8; // w8
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !obj
    || (maxCount = this->fields.maxCount,
        maxLine = this->fields.maxLine,
        v6 = this,
        (this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_B5D69C(this, obj);
  }
  v8 = index / maxCount;
  if ( index / maxCount > maxLine )
    v8 = maxLine;
  v9.fields.y = v6->fields.addPos.fields.y * (float)v8;
  v9.fields.x = v6->fields.addPos.fields.x * (float)(index % maxCount);
  v9.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
}


void __fastcall BattleServantShowBuffComponent__setBuffList(
        BattleServantShowBuffComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct BattleBuffData_ShowBuffData_array **p_datalist; // x20
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *updated; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int32_t v22; // w21
  __int64 v23; // x8
  struct System_Collections_Generic_List_GameObject__o *objList; // x9
  int32_t size; // w9
  int v26; // w10
  int v27; // w22
  struct System_Collections_Generic_List_GameObject__o *v28; // x26
  __int64 v29; // x24
  int v30; // w8
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *v32; // x9
  BattleBuffData_ShowBuffData_o *v33; // x9
  __int64 v34; // x0

  if ( (byte_42EB28E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___,
      (_DWORD)buffList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13, v14, v15);
    byte_42EB28E = 1;
  }
  this->fields.datalist = buffList;
  p_datalist = &this->fields.datalist;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.datalist,
    (System_Int32_array **)buffList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantShowBuffComponent__HideBuffObject(this, v17);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_35;
  v22 = 0;
  while ( 1 )
  {
    v23 = *(_QWORD *)&datalist->max_length;
    if ( v22 >= (int)v23 )
      return;
    objList = this->fields.objList;
    if ( !objList )
      goto LABEL_35;
    size = objList->fields._size;
    v26 = this->fields.maxLine * this->fields.maxCount;
    if ( v26 <= v22 )
      break;
    if ( size <= v22 )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, v22, v20);
    }
    else
    {
      updated = (UnityEngine_GameObject_o *)BattleServantShowBuffComponent__UpdateBuff(this, v22, v20);
      if ( ((unsigned __int8)updated & 1) == 0 )
        BattleServantShowBuffComponent__NewBuff(this, v22, v20);
    }
    datalist = *p_datalist;
    ++v22;
    if ( !*p_datalist )
      goto LABEL_35;
  }
  v27 = size - v26;
  if ( size - v26 >= 1 && v22 < (int)v23 )
  {
    while ( 1 )
    {
      v28 = this->fields.objList;
      if ( !v28 )
        break;
      v29 = 0LL;
      while ( 1 )
      {
        v30 = v28->fields._size;
        if ( (int)v29 >= v30 )
          break;
        if ( v30 <= (unsigned int)v29 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        updated = v28->fields._items->m_Items[v29];
        if ( !updated )
          goto LABEL_35;
        updated = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                updated,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
        if ( !updated )
          goto LABEL_35;
        monitor = updated[3].monitor;
        if ( monitor )
        {
          v32 = *p_datalist;
          if ( !*p_datalist )
            goto LABEL_35;
          if ( v22 >= v32->max_length )
          {
            v34 = sub_B5D6C8(updated);
            sub_B5D668(v34, 0LL);
          }
          v33 = v32->m_Items[v22];
          if ( !v33 )
            goto LABEL_35;
          if ( monitor[9] == v33->fields.addOrder )
          {
            BattleServantBuffIconComponent__setIcon_21093468((BattleServantBuffIconComponent_o *)updated, 0LL, 0LL);
            --v27;
            break;
          }
        }
        v28 = this->fields.objList;
        ++v29;
        if ( !v28 )
          goto LABEL_35;
      }
      if ( !*p_datalist )
        break;
      if ( v27 >= 1 && ++v22 < (signed int)(*p_datalist)->max_length )
        continue;
      return;
    }
LABEL_35:
    sub_B5D69C(updated, v19);
  }
}